#include<bits/stdc++.h>
using namespace std;
void revs(string c)
{
    int n = c.length();
    while(n--){
        cout<<c[n];
    }
}
int main()
{
    string s;
    getline(cin,s);
    revs(s);
}