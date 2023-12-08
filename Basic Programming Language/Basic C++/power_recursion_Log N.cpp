#include<bits/stdc++.h>
using namespace std;
double mypow(double x, int n){
    if(n==0){
        return 1;
    }
    else if(n%2==0){
        int r = mypow(x,n/2);                 // 0(Log N)
        return r*r;
    }
    else{
        return x*mypow(x,n-1);
    }
}
int main()
{
    cout<<mypow(2,3);
}
