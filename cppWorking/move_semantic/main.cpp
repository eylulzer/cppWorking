#include <iostream>
#include <utility>
#include <vector>
#include <string>

template <class T>
T copy_swap(T &a, T &b)
{
    T tmp(a); // we now have two copies of a
    a = b;    // we now have two copies of b (+ discarded a copy of a)
    b = tmp;  // we now have two copies of tmp (+ discarded a copy of b)
    return tmp;
}

template <class T>
T move_swap(T &a, T &b)
{
    T tmp(std::move(a));
    a = std::move(b);
    b = std::move(tmp);
    return tmp;
}

// make our own version of std::vector with copying disabled
template <class T>
class MyVector : public std::vector<T>
{ // inherits from std::vector
public:
    // implement the same constructors as vector defines
    MyVector() : std::vector<T>() {}
    MyVector(int size) : std::vector<T>(size) {}
    MyVector(std::initializer_list<T> l) : std::vector<T>(l) {}
    MyVector(const MyVector &&v) : std::vector<T>(v) {}

private:
    // disable copying
    MyVector(const MyVector &);
    MyVector &operator=(const MyVector &);
};

int main()
{
    /// Moving strings into vectors
    std::string str = "Hello";
    std::vector<std::string> v;

    v.push_back(str);
   std::cout << "After copy, str is \"" << str << "\"\n";

    v.push_back(std::move(str));
  //  std::cout << "After move, str is: " << str << std::endl;

    std::cout << "The contents of the vector are \"" << v[0]
              << "\", \"" << v[1] << "\"\n";

    /// Swapping

    std::string a = "xxxx";
    std::string b = "yyyy";
    std::string t1, t2;

    std::cout << "\nSwapping with copy"
              << "\n\na: " << a << " b: " << b << std::endl;
    t1 = copy_swap<std::string>(a, b);
    std::cout << "a: " << a << " b: " << b << " tmp: " << t1 << std::endl;

    std::cout << "\nSwapping with move"
              << "\n\na: " << a << " b: " << b << std::endl;
    t2 = move_swap<std::string>(a, b);
    std::cout << "a: " << a << " b: " << b << " tmp: " << t2 << std::endl;

    /// Vectors

    std::cout << "\n\n Custom Vectors" << std::endl;

    std::vector<std::vector<int>> standart_vector;
    std::vector<MyVector<int>> my_vector;

    standart_vector.push_back({1, 2, 3, 4}); // this works with std::vector, using move constructor
    my_vector.push_back({5, 6, 7, 8});       // this works with MyVector, using move constructor

    std::cout << "\nstandart vector: " << std::endl;

    for (const auto &std : standart_vector)
        for (const auto &i : std)
            std::cout << i << ' ';

    std::cout << "\n\nmy vector: " << std::endl;

    for (const auto &mvc : my_vector)
        for (const auto &i : mvc)
            std::cout << i << ' ';

    std::vector<int> v1{0, 0, 0, 0};
    MyVector<int> v2{1, 1, 1, 1};

    standart_vector.push_back(v1); // this works with std::vector, but will be doing a full copy!
    //my_vector.push_back(v2); // this gives a compile error with MyVector, as we've disabled copying!

    std::cout << "\n\nstandart vector after push_back: " << std::endl;

    for (const auto &std : standart_vector)
        for (const auto &i : std)
            std::cout << i << ' ';

    std::cout << std::endl;

}