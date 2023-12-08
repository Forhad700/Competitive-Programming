// series sum  1+2+3.......+n

#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        sum = sum + i;
    }
    cout<<"Sum is: "<<sum<<endl;
}
