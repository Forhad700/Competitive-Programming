#include<iostream>
using namespace std;
struct person{
    int id;
    string name;
    float salary;
};
int main()
{
    struct person p1,p2;
    p1.id = 3;
    p1.name = "Forhad";
    p1.salary = 30500.500;

    p2.id = 5;
    p2.name = "Hosen";
    p2.salary = 50700.300;

    cout<<"Person 1:\n";
    cout<<"ID: "<<p1.id<<"\n";
    cout<<"Name: "<<p1.name<<"\n";
    cout<<"Salary: "<<p1.salary<<"\n";

    cout<<"\nPerson 2:\n";
    cout<<"ID: "<<p2.id<<"\n";
    cout<<"Name: "<<p2.name<<"\n";
    cout<<"Salary: "<<p2.salary<<"\n";
}
