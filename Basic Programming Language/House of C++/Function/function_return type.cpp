#include<bits/stdc++.h>
using namespace std;
void dis(){
    cout<<"Function with return type................\n.........................................\n";
}
int add(int a, int b){
    int c = a+b;
    return c;
}
int sub(int a, int b){
    int c = a-b;
    return c;
}
int mul(int a, int b){
    int c = a*b;
    return c;
}
double div(double a, int b){
    double c = a/b;
    return c;
}
int main(){
    double x,y;
    cin>>x>>y;
    dis();
    cout<<"Addition: "<<add(x,y)<<endl;
    cout<<"Subtraction: "<<sub(x,y)<<endl;
    cout<<"Multiplication: "<<mul(x,y)<<endl;
    cout<<"Division: "<<div(x,y)<<endl;
}
