#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[] = "Hello world!";
    char s2[10];
    cout<<"s1: "<<s1<<endl;

    strcpy(s2,s1);                         // strcpy( ) used to copy string
    cout<<"s2: "<<s2<<endl;
}
