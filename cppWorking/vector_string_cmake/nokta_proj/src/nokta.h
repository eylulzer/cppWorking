#pragma once 
#include <string>
#include <vector>
#include <strings.h>
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include "boost/algorithm/string.hpp"

class Nokta
{
    private:

    public:

    float x;
    float y;
    float z;

    Nokta();
    Nokta(float x, float y, float z);
    void yazdir();
std::vector<Nokta> donustur(std::vector<std::string> vektor);

};