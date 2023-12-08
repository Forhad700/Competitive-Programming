#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = ++a;                                                   // ++a  prefix increments x by one before it is used
    cout<<"b = "<<b<<endl;               // Now  b = 6
    cout<<"a = "<<a<<endl;              // now  a = 6

    int c = a++;                                                  // a++  postfix increments x by one after it is used
    cout<<"c = "<<c<<endl;             // Now  c = 6
    cout<<"a = "<<a<<endl;            // Now  a = 7

    int x = 10;
    int y = --x;                                                 // --a  prefix decrements x by one before it is used
    cout<<"y = "<<y<<endl;               // Now  y = 9
    cout<<"x = "<<x<<endl;              // now  x = 9

    int z = x--;                                                // a--  postfix decrements x by one after it is used
    cout<<"z = "<<z<<endl;             // Now  z = 9
    cout<<"x = "<<x<<endl;            // Now  x = 8
}
