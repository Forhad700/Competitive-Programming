#include <iostream>
using namespace std;
string rev(string s){
    string c;
    for(int i=s.size()-1; i>=0; i--){
        c.push_back(s[i]);
    }
    return c;
}
int main()
{
    string str;
    getline(cin,str);
    cout<<rev(str);
}
