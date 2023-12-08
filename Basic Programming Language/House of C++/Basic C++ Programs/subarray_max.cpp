#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<=n-k; i++){
        int mx = a[i];
        for(int j=1; j<k; j++){
            if(a[i+j]>mx)
                mx = a[i+j];
        }
        cout<<mx<<" ";
    }
}