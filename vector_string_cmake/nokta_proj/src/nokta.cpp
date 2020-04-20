
#include "nokta.h"
#include "boost/algorithm/string.hpp"

using namespace std;

Nokta::Nokta()
{
    x=0;
    y=0;
    z=0;
}

Nokta::Nokta(float x, float y, float z)
{
    this->x=x;
    this->y=y;
    this->z=z;
    
}
void Nokta::yazdir(){
    cout<<"x: "<<x<<" y: "<<y<<" z: "<<z<<endl;
}
vector<Nokta> Nokta::donustur(std::vector<string> vektor)
{
    vector<Nokta> noktalar;

    for(auto &satir : vektor)
    {
        vector<string> sayilar;
        boost::split(sayilar, satir, boost::is_any_of(" "));
        if(sayilar.size()==3)
        {
            
            float x=stof(sayilar[0]);
            float y=stof(sayilar[1]);
            float z=stof(sayilar[2]);
            
            Nokta g(x,y,z);
            noktalar.push_back(g);
        }
        else
        {
            cout<<satir<<". satir hatali"<<endl;
        }
    
    }
    for(auto &values : noktalar)
    {   
        values.yazdir();
    }
return noktalar;
} 

