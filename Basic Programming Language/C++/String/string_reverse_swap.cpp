#include <bits/stdc++.h>
using namespace std;
string rev(string s){
    int i,j;
    for(i=0, j=s.size()-1; i<j; i++, j--){
        swap(s[i],s[j]);
    }
    return s;
}
int main()
{
    string str;
    getline(cin,str);
    cout<<rev(str);
}
