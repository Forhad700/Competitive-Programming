#include<bits/stdc++.h>
using namespace std;
double mypow(double x, int n){
    if(n==0){
        return 1;
    }
    else{
        return x*mypow(x,n-1);                    // 0(N)
    }
}
int main()
{
    cout<<mypow(2,3);
}
