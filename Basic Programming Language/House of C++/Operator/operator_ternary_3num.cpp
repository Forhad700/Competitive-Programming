#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mx = (a>b && a>c)? a: ((b>c)?b:c);
    cout<<mx;
}
