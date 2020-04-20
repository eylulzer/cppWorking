#include <iostream>
#include <vector>
#include <boost/algorithm/string.hpp>

using namespace std;

class Nokta 
{
    private:
    public:
    Nokta();
    Nokta(float x, float y, float z);
    vector <Nokta> donustur(vector<string> vektor);
    void yazdir();
    double x,y,z;
};  

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
void Nokta::yazdir()
{
    cout<< "x: "<<x<<" y: "<<y<<" z: "<<z<<endl;
}

vector <Nokta> Nokta::donustur(vector<string> vektor)
{   
    vector<Nokta> noktalar;
    
    for(auto &satir: vektor)
    {
        vector<string> sayilar;
        boost::split(sayilar, satir , boost::is_any_of(" "));
        if(sayilar.size()==3)
        {
            float x= stof(sayilar[0]);
            float y=stof(sayilar[1]);
            float z= stof(sayilar[2]);
            Nokta g(x,y,z);
            noktalar.push_back(g);
        }
        else
        {
            cout<<"satir hatali"<<endl;
        }
        

    }
    for(auto &values: noktalar)
    {
        values.yazdir();
    }
    return noktalar;
}



int main ()
{
    vector<string> v1 ={"3.2 4.56 17.9817", 
                        "4.5 6.7 8.99",
                            "67.8 90.5 34.7",
                            "4.5 6.7 8.99",
                            "4.5 89.7 8.99",
                            "4.5 6.7 899",
                            "4.5 6.7",
                            "4.5 78 6.7 8.99"};

    Nokta z;
    z.donustur(v1);
}