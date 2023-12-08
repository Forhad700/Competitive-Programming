#include<bits/stdc++.h>
using namespace std;
int sequence_sum(int n)
{
    if(n==1){
        return 1;
    }
    else{
        return sequence_sum(n-1) + n;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<sequence_sum(n);
}
