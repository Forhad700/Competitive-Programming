#include<iostream>
using namespace std;
int main()
{
    for(int i=0; i<3; i++){
        cout<<"Outer Loop: "<<i<<endl;
        for(int j=0; j<5; j++){
            cout<<j<<endl;
        }
    }
}
