#include<bits/stdc++.h>
using namespace std;
void dis(int *n){
    *n = 20;
}
int main()
{
    int x = 10;
    cout<<x<<endl;
    dis(&x);
    cout<<x;
}
