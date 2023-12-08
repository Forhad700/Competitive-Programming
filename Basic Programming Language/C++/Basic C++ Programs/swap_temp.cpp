#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,t;
    cin>>n1>>n2;
    cout<<"N1: "<<n1<<" N2: "<<n2<<endl;
    t = n1;
    n1 = n2;
    n2 = t;
    cout<<"N1: "<<n1<<" N2: "<<n2<<endl;
}
