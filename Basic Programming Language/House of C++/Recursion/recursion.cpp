#include<bits/stdc++.h>
using namespace std;
void rec(int n){
    if(n==0){
        return;
    }
    n--;
    cout<<n<<endl;
    rec(n);
    cout<<n<<endl;
}
int main()
{
    rec(3);
    return 0;
}
