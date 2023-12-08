#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream a;                             // ofstream used to write files,  file variable be any type
    a.open("student.txt");                 // if "folder_file_name.txt" exists it will be overwritten otherwise it will be created
    a <<"Hello world! Happy coding\n";
    a.close();
}
