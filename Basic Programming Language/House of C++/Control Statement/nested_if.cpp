#include <iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    if(m>100 || m<0){
        cout<<"Invalid";
    }
    else if(m>=33){
        if(m>=80){
            cout<<"A+";
        }
        else if(m>=70){
            cout<<"A";
        }
        else if(m>=60){
            cout<<"A-";
        }
        else if(m>=50){
            cout<<"B";
        }
        else if(m>=40){
            cout<<"C";
        }
        else if(m>=33){
            cout<<"D";
        }
    }
    else{
        cout<<"Fail";
    }
}
