#include <iostream>
#include <string>
#include <boost/algorithm/string.hpp>

using namespace std;

string longestWord(string str)
{
    string word;
    string longestWord;
    
    int size=0;
    for(auto &eachword: str)
    {
        boost::split(word, eachword, boost::is_any_of(" "));
        if (size<word.size())
        {
            size=word.size();
            longestWord=word;
        }
    }
    return longestWord;
}


int main ()
{
    cout<<longestWord("I love coding")<<endl;
    return 0;
}