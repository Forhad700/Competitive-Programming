#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[] = "level";
    char s2[20];
    int i=0,j,l=0;
    while(s1[i]!='\0'){
        i++;
        l++;
    }
    for(j=0, i=l-1; i>=0; i--, j++){
        s2[j] = s1[i];
    }
    s2[j] = '\0';
    int p = strcmp(s1,s2);
    if(p==0){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}
