#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,a1,r,b1,gcd,lcd;
    cin>>a>>b;
    a1 = a;
    b1 = b;
    while(b1!=0){
        r = a1%b1;
        a1 = b1;
        b1 = r;
    }
    gcd = a1;
    lcd = (a*b)/gcd;
    cout<<"GCD: "<<gcd<<"\n";
    cout<<"LCD: "<<lcd<<"\n";
}
