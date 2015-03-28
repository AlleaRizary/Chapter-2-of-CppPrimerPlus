//C++ Primer Plus - Stephen Prata (Chapter 2 - Exercise 2.4)
//

#include <iostream>
double fahrenheitToCelcius(int clc);

int main()
{
    using namespace std;
    cout<<"Please enter a Celcius value : ";
    double celcius;
    int clc;
    cin>>clc;
    celcius=fahrenheitToCelcius(clc);
    cout<<clc<<" degrees Celcius is "<<celcius<<" degrees Fahrenheit."<<endl;
    return 0;
}

double fahrenheitToCelcius(int clc)
{
    return (1.8*clc)+32.0;
}



