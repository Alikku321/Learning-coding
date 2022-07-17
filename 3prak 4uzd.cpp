#include <iostream>
#include <cmath>

using namespace std;

void mean (int x, int y, int& amean, int& gmean)
{
    amean = (x+y)/2;//vidējais aritmētiskais
    gmean = sqrt(x*y);//vidējais ģeometriskais
}
int main()
{
    int amean, gmean;
    int a, b, c, d;
    cout<<"Enter numbers to calculate vid aritmetic and geometric: "<<endl;

    cout<<"a: "; cin>>a;
    cout<<"b: "; cin>>b;
    cout<<"c: "; cin>>c;
    cout<<"d: "; cin>>d;
    
    cout<<"(a,b)""\n", mean(a, b, amean, gmean);
    cout<<"vid aritmetiskais: "<<amean<<"\n""geometriskais: "<<gmean<<endl;
    cout<<"(a,c)""\n", mean(a, c, amean, gmean);
    cout<<"vid aritmetiskais: "<<amean<<"\n""geometriskais: "<<gmean<<endl;
    cout<<"(a,d)""\n", mean(a, d, amean, gmean);
    cout<<"vid aritmetiskais: "<<amean<<"\n""geometriskais: "<<gmean<<endl;

    return 0;
}