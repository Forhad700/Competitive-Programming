#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int x=2, y=3;
    int *p1 = &x, *p2 = &y;
    int sum = *p1+*p2;
    cout<<sum;
}
