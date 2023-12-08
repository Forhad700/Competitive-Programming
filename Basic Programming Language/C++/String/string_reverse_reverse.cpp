#include<bits/stdc++.h>
using namespace std;
void revs(string c)
{
    reverse(c.begin(),c.end());
    cout<<c;
}
int main()
{
    string s;
    getline(cin,s);
    revs(s);
}