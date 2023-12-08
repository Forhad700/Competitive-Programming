#include <iostream>
using namespace std;
int main()
{
    int n,t,r=0;
    cin>>n;
    while(n){
        t = n%10;
        r = r*10+t;
        n = n/10;
    }
    cout<<r;
}
