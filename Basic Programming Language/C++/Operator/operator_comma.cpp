#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    c = (a=10, b=5, c=a+b);                 // ( left side sub expression, right side expression )
    cout<<"Addition: "<<c<<endl;


    int d,e,f;
    f = (d=3, e=2, f=d*e);
    cout<<"Multiplication: "<<f<<endl;
}
