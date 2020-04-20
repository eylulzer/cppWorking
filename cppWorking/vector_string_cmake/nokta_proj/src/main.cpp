#include <iostream>
#include <vector>
#include "nokta.h"
#include <string>
#include <iostream>
#include "boost/algorithm/string.hpp"

using namespace std;

int main()
{
    Nokta z;
    std::vector<std::string> v1 {"3.2 4.56 17.9817", 
                        "4.5 6.7 8.99",
                            "67.8 90.5 34.7",
                            "4.5 6.7 8.99",
                            "4.5 89.7 8.99",
                            "4.5 6.7 899",
                            "4.5 6.7",
                            "4.5 78 6.7 8.99"};
    z.donustur(v1);
    
}