#include <iostream>
using namespace std;
string str(string x){
    return x;
}
int main()
{
    string s;
    getline(cin,s);
    cout<<str(s);
}
