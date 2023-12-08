#include<iostream>
using namespace std;
void fun(int x){
    x=3;
    cout<<x<<endl;
}
int main()
{
    int x=2;
    fun(x);
    cout<<x;
}
