#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a=0, b=1, c=0;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=3; i<=n; i++){
        c = a+b;
        a = b;
        b = c;
        cout<<c<<" ";
    }
}
