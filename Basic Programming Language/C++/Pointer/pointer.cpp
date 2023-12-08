#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int x=5;
    int *p;
    p = &x;
    cout<<"Values of x:  "<<x<<endl;
    cout<<"Address of x:  "<<&x<<endl;
    cout<<"Values of x:  "<<*p<<endl;
    cout<<"Address of x:  "<<p<<endl;
}