#include<iostream>
using namespace std;

float pow(float x, int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n>0)
    {
        return x*pow(x,n-1);
    }
    else
    {
        return 1/pow(x,n);
    }
}
int main()
{
    float x; int n;
    cout<<"Enter a number: "; cin>>x;
    cout<<"Enter a Exponent: "; cin>>n;
    cout<<"Result = "<<pow(x,n)<<"\n";
    system("pause");
    return 0;
}