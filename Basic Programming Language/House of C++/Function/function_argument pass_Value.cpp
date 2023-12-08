#include<bits/stdc++.h>
using namespace std;
void dis(int n){             // Formal parameter
    n = 20;
}
int main()
{
    int x = 10;
    cout<<x<<endl;
    dis(x);                // actual parameter    ( No change )
    cout<<x;
}
