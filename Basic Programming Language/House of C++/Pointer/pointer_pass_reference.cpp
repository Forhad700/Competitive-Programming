#include<iostream>
using namespace std;
void fun(int *px){
    *px = 3;
    cout<<*px<<endl;
}
int main()
{
    int x = 2;
    int *px = &x;
    fun(&x);
    cout<<x;
}
