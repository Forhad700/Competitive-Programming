#include <iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    string s1 = "Hello";
    string s2 = "World";
    string s3;

    s3 = s1;
    cout<<"String copy from s1 to s3:      "<<s3<<endl;
    s3 = s1+s2;
    cout<<"String Concatenation s1 + s2:   "<<s3<<endl;
    cout<<"Size of String s3:              "<<s3.size()<<endl;       // size() used to find length of string
}
