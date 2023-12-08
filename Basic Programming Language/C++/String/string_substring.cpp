#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    string s = "Abcdef";
    cout<<"String =   "<<s<<endl;
    cout<<"String length =   "<<s.length()<<endl;                  // length()   used to find length of string
    cout<<"Substring is =   "<<s.substr(0,3)<<endl;               // substr()   used to print sub string
    cout<<"Substring is =   "<<s.substr(1,3)<<endl;
}
