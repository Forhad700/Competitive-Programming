#include<iostream>
using namespace std;
int sumNum(int n){
    int s=0;
    s = n*(n+1)/2;
    return s;
}
int sumRange(int x, int y){
    return sumNum(y) - sumNum(x-1);
}
int main()
{
    int f,l;
    cin>>f>>l;
    cout<<sumRange(f,l);
}
