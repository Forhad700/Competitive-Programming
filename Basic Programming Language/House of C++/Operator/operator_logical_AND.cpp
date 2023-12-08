#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){                      // &&  logical AND
        cout<<"a is large";
    }
    else if(b>a && b>c){
        cout<<"b is large";
    }
    else{
        cout<<"c is large";
    }
}
