#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char s[] = "Hello";
    strupr(s);
    cout<<"To Uppercase: "<<s<<endl;
    strlwr(s);
    cout<<"To Lowercase: "<<s<<endl;
}
