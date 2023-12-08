#include<iostream>
using namespace std;
struct person{
    int id;
    string name;
    float salary;
};
int main()
{
    typedef person x;                           // typedef used to modify user defined data type name
    x p = {3,"Forhad",50000};
    cout<<"ID: "<<p.id<<"\n";
    cout<<"Name: "<<p.name<<"\n";
    cout<<"Salary: "<<p.salary<<"\n";
}
