//C++ Primer Plus - Stephen Prata (Chapter 2 - Exercise 2.3)
//
#include <iostream>
using namespace std;

double lightToAstro(double light);
int main()
{
    double light;
    double astro;
    cout<<"Enter the number of light years: "<<endl;
    cin>>light;
        
    astro=lightToAstro(light);
    cout<<light<<"light years = "<<astro<<" astronomical units.";
    cout<<endl;
    return 0;

}

double lightToAstro(double light)
{
    return light*63240;
}

