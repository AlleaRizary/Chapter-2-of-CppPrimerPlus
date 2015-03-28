//C++ Primer Plus - Stephen Prata (Chapter 2 - Exercise 2.2)
//

#include <iostream>
int furlongsToYards(int frl);

int main()
{
    using namespace std;
    int furlongs;
    cout<<"Please input furlongs = ";
    cin>>furlongs;
    int yards = furlongsToYards(furlongs);
    cout<<furlongs<<" Furlongs are equal to "
        <<yards<<" Yards."<<endl;   
    
    return 0;
}

int furlongsToYards(int frl)
{
    return 220*frl;
}
