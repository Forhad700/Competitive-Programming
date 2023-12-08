#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b;

    c = a>>b;                                  // >>  Right shift
    cout<<"Right Shift: "<<c<<endl;

    d = a<<b;                                 // <<   Left shift
    cout<<"Left Shift: "<<d<<endl;
}
