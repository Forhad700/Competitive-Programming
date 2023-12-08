#include<bits/stdc++.h>
using namespace std;
int x = 10;                             // Global variable

int main()
{
    int x = 20;
    :: x = 30;                       // Global variable value changing
    cout<<::x<<endl;                // Global variable print using scope resolution
}
