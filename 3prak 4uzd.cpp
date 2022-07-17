#include <iostream>
#include <cmath>

using namespace std;

void mean (int x, int y, int& amean, int& gmean)
{
    amean = (x+y)/2;//average arithmetic
    gmean = sqrt(x*y);//average geometric
}
int main()
{
    int amean, gmean;
    int a, b, c, d;
    cout<<"Enter numbers to calculate average aritmetic and geometric: "<<endl;

    cout<<"a: "; cin>>a;
    cout<<"b: "; cin>>b;
    cout<<"c: "; cin>>c;
    cout<<"d: "; cin>>d;
    
    cout<<"(a,b)""\n", mean(a, b, amean, gmean);
    cout<<"average aritmetic: "<<amean<<"\n""geometric: "<<gmean<<endl;
    cout<<"(a,c)""\n", mean(a, c, amean, gmean);
    cout<<"average aritmetic: "<<amean<<"\n""geometric: "<<gmean<<endl;
    cout<<"(a,d)""\n", mean(a, d, amean, gmean);
    cout<<"average aritmetic: "<<amean<<"\n""geometric: "<<gmean<<endl;

    return 0;
}
