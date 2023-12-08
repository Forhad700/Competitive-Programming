#include <iostream>
using namespace std;
int main()
{
    int n,t,r,s=0;
    cin>>n;
    t = n;
    while(t!=0){
        r = t%10;
        s = s+r;
        t = t/10;
    }
    cout<<s;
}
