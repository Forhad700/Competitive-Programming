#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream a;
    string s;
    a.open("file1.txt", ios::out|ios::app);             // for keeping existing data with adding new data
    cout<<"Enter: ";                                   // ios::out|ios::app  is used
    getline(cin,s);
    a<<s<<endl;
    a.close();
}
