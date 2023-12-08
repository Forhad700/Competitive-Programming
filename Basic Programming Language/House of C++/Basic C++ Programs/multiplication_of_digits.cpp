#include <iostream>
using namespace std;
int main()
{
    int n,t,r,m=1;
    cin>>n;
    t = n;
    while(t!=0){
        r = t%10;
        m = m*r;
        t = t/10;
    }
    cout<<m;
}
