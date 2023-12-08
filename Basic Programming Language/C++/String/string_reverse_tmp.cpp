#include <iostream>
using namespace std;
void CopyRev(string str){
    string c="";
    for(int i=str.size()-1; i>=0; i--){
        c = c + str[i];
    }
    cout<<c;
}
int main(){
    string s;
    getline(cin,s);
    CopyRev(s);
}
