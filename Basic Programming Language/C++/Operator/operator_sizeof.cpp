#include <iostream>
using namespace std;
int main()
{
    int a;
    float b;
    double c;
    char d;
    char e[10];

    cout<<"Size of Integer a: "<<sizeof(a)<<endl;                 // sizeof() used to returns memory bytes
    cout<<"Size of Float b: "<<sizeof(b)<<endl;
    cout<<"Size of Double c: "<<sizeof(c)<<endl;
    cout<<"Size of Character d: "<<sizeof(d)<<endl;
    cout<<"Size of Character Array e: "<<sizeof(e)<<endl;
}
