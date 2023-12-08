#include<bits/stdc++.h>
using namespace std;
struct person
{
    int age;
    string name;
    float salary;
};

struct person person1, person2;

int main()
{
    cout<<"Enter Person 1 data\n";
    cout<<"Enter Age: ";
    cin>>person1.age;
    cout<<"Enter Name: ";
    fflush(stdin);
    getline(cin,person1.name);
    cout<<"Enter Salary: ";
    cin>>person1.salary;

    cout<<"Enter Person 2 data\n";
    cout<<"Enter Age: ";
    cin>>person2.age;
    cout<<"Enter Name: ";
    fflush(stdin);
    getline(cin,person2.name);
    cout<<"Enter Salary: ";
    cin>>person2.salary;

    cout<<"\nPerson 1 Age: "<<person1.age<<"\n";
    cout<<"Person 1 Name: "<<person1.name<<"\n";
    cout<<"Person 1 Salary: "<<person1.salary<<"\n";

    cout<<"\nPerson 2 Age: "<<person2.age<<"\n";
    cout<<"Person 1 Name: "<<person2.name<<"\n";
    cout<<"Person 2 Salary: "<<person2.salary<<"\n";
}
