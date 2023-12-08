#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    if(a>b && a>c){                      // &&  logical AND
        d = a;
    }
    else if(b>a && b>c){
        d = b;
    }
    else{
        d = c;
    }
    cout<<"Large: "<<d;
}
