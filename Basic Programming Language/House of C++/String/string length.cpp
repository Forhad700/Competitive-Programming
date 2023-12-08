#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[20];
    cout<<"Enter string: ";
    gets(st);
    int i=0, len = 0;
    while(st[i]!='\0'){
        len++;
        i++;
    }
    cout<<len;

}
