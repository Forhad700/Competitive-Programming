#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    x = 10;
    cout<<*(&x);
    int *px;
    px = &x;
    cout<<px<<endl;
    cout<<&x<<endl;

}
