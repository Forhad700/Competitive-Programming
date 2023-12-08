#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[] = "Abc";
    char s2[] = "abc";
    int n = strcmp(s1,s2);
    if(n==0)
        cout<<"String Equal"<<endl;
    else
        cout<<"String Not Equal"<<endl;
}
