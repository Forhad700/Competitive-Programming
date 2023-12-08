#include <iostream>
using namespace std;
string CopyRev(string str){
    string c="";
    for(int i=str.size()-1; i>=0; i--){
        c = c + str[i];
    }
    return c;
}
int main(){
    string s;
    getline(cin,s);
    cout<<CopyRev(s);
}
