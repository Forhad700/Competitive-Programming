#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string s;
    ifstream a("file2.txt");                     // ifstream used to read files
    while(getline(a,s)){                        // getline() used to read line by line from a file
        cout<<s<<endl;
    }
    a.close();
}
