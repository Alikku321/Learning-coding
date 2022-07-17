#include <iostream>

using namespace std;

int main()
{
    string username;
    string password;
    int credits = 0;

    cout<<"Enter your username: ";
    cin>>username;
    cout<<"Enter your password: ";
    cin>>password;

    cout<<"Your username and password is: "<<username + " " + password<<endl;

    if((username == "admin") && (password == "123"))
    {
        credits = 100000;
        cout<<"You have: "<<credits;
    } else {
        cout<<"You have: "<<credits<<" credits";
    }
    
    return 0;

}