#include <iostream>
using namespace std;
int main(){
    string s1 = "Hello World";
    s1 += "!";                       // concatenate
    cout << s1 << endl;

    cout << "The position of first 'o' is: " << s1.find('o') << endl;          // find
    cout << "The position of last 'o' is: " << s1.rfind('o') << endl;

    cout << s1.substr(6,5) << endl;          // get substr
}
