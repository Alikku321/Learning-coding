#include <iostream>
#include <cmath>

using namespace std;

void root(int x, int& a, int& b, int& c)
{
    a = pow(x,2);
    b = pow(x,3);
    c = pow(x,4);
}

int main()
{
    int x, i, a, b, c;
    i = 1;
    while(i++ <= 5)
    {
        cout<<"Enter numbers: ";
        cin>>x;
        root(x, a, b, c);
        cout<<"x2 = "<<a<<"\n""x3 = "<<b<<"\n""x4 = "<<c<<endl;
    }

    return 0;
}