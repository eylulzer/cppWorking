#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

string FirstReverse(string str)
{
  string additional_string;

  for (int i=str.size(); i>=0; i--)
  {
    additional_string.push_back(str[i]);
  }
  str=additional_string;
  return str;
}

int main(void) { 
   
  // keep this function call here
  cout<<FirstReverse("I love coding")<<endl;
  return 0;
    
}