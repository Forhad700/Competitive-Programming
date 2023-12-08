#include<iostream>
using namespace std;
int largestElement(int x, int y){
    int tmp;
    if(x>y){
        tmp = x;
    }
    else{
        tmp = y;
    }
    return tmp;
}
int main()
{
    int a,b,c,t1,t2;
    cin>>a>>b>>c;
    t1 = largestElement(a,b);
    t2 = largestElement(t1,c);
    cout<<t2;
}
