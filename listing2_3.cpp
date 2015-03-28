//C++ Primer Plus - Stephen Prata (Chapter 2 - Listing 2.3)
//

#include <iostream>

int main(){
    using namespace std;
    int carrots;

    cout<<"How many carrots do you have? "<<endl;
    cout<< ">"; cin >> carrots;
    cout<<"Here are two more.";
    carrots = carrots+2;
    cout<<" now you have "<< carrots <<" carrots Yay!! "<<endl;
    return 0;
}
