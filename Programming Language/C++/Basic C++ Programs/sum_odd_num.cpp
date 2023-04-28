// sum of Odd numbers  1+3+5.......+n

#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=1; i<=n; i+=2){
        sum = sum + i;
    }
    cout<<"Sum is: "<<sum<<endl;
}
