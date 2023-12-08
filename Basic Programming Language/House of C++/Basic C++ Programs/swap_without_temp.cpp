#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    cout<<"N1: "<<n1<<" N2: "<<n2<<endl;
    n1 = n1^n2;
    n2 = n1^n2;
    n1 = n1^n2;
    cout<<"N1: "<<n1<<" N2: "<<n2<<endl;
}
