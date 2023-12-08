#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,c=0;
    cin>>n1>>n2;
    for(int i=n1; i<=n2; i++){
        for(int j=2; j<i; j++){
            if(i%j==0){
                c++;
                break;
            }
        }
        if(c==0){
            cout<<i<<endl;
        }
        c=0;
    }
}
