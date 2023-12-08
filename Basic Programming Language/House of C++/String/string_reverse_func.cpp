#include<bits/stdc++.h>
using namespace std;
void revs(string c)
{
    for(int i=c.length()-1; i>=0; i--){
        cout<<c[i];
    }
}
int main()
{
    string s;
    getline(cin,s);
    revs(s);
}