#include <bits/stdc++.h>
using namespace std;
void add(int a, int b){
    int r = a+b;
    cout<<"Addition: "<<r<<endl;
}
void sub(int a, int b){
    int r = a-b;
    cout<<"Subtraction: "<<r<<endl;
}
void mul(int a, int b){
    int r = a*b;
    cout<<"Multiplication: "<<r<<endl;
}
void divi(double a, int b){
    double r = a/b;
    cout<<"Division: "<<r<<endl;
}
int main ()
{
    int a,b;
    cin>>a>>b;
    add(a,b);
    sub(a,b);
    mul(a,b);
    divi(a,b);
}
