//C++ Primer Plus - Stephen Prata (Chapter 2 - Exercise 2.3)
//

#include <iostream>
using namespace std;

void time(int hour, int minutes);
int main()
{
    int hour;
    cout<<"Enter the number of hours :";
    cin>>hour;
    int minutes;
    cout<<"Enter the number of minutes :";
    cin>>minutes;
    time(hour,minutes);
}

void time(int hour,int minutes)
{
    cout<<"Time: "<<hour<<":"<<minutes<<endl;
}

