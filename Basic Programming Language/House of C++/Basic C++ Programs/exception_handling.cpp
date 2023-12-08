#include<bits/stdc++.h>
using namespace std;
int main()
{
    try{
        int a,b;
        cin>>a>>b;

        if(b==0){
            throw -1;
        }
        double r = double(a)/b;
        cout<<r<<endl;
    }
    catch(...){
        cout<<"Divide by Zero returns infinity"<<endl;
    }
}
