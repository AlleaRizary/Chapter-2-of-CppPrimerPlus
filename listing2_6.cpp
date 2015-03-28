//C++ Primer Plus - Stephen Prata (Chapter 2 - Listing 2.6)
//

#include <iostream>
int stonelb(int sts);
int main(){
    using namespace std;
    cout<<"Enter the weight in stone =";
    int stone;
    cin>>stone;
    int pounds = stonelb(stone);
    cout<< stone << "stone = ";
    cout<< pounds << "lb."<<endl;
    return 0;
}

int stonelb(int sts)
{
    return 14*sts;
}

