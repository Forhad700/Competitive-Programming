#include <bits/stdc++.h>
using namespace std;
string rev(string s){
    for(int i=0; i<s.size()/2; i++){
        char c;
        c = s[i];
        s[i] = s[s.size()-1-i];
        s[s.size()-1-i] = c;
    }
    return s;
}
int main()
{
    string str;
    getline(cin,str);
    cout<<rev(str);
}
