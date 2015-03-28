//C++ Primer Plus - Stephen Prata (Chapter 2 - Exercise 2.3)
//

#include <iostream>
void firstTwoLine(char a);
void remainingTwoLine(char a);
using namespace std;

int main()
{
    
    char line1;
    firstTwoLine(line1);
    firstTwoLine(line1);
    cout<<endl;
    char line2;
    remainingTwoLine(line2);
    remainingTwoLine(line2);
    cout<<endl;

    return 0;
}

void firstTwoLine(char a)
{
    cout<<"Three blind mice"<<endl;
}

void remainingTwoLine(char a)
{
    cout<<"See how they run"<<endl;
}
