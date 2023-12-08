#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b;

    c = a&b;                                  // &  bitwise AND
    cout<<"Bitwise AND: "<<c<<endl;

    d = a|b;                                 // |   bitwise OR
    cout<<"Bitwise OR: "<<d<<endl;

    e = a^b;                                // ^    bitwise XOR
    cout<<"Bitwise XOR: "<<e<<endl;
}
