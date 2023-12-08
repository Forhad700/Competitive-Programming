#include<iostream>
using namespace std;
struct person
{
    int id;
    string name;
    float salary;
};

int main()
{
    struct person p[3];
    for(int i=0; i<3; i++){
        cout<<"Enter Person "<<i+1<<" Data\n";
        cout<<"Input ID: ";
        cin>>p[i].id;
        cout<<"Input Name: ";
        cin>>p[i].name;
        cout<<"Input Salary: ";
        cin>>p[i].salary;
    }
    for(int i=0; i<3; i++){
        cout<<"\nPerson "<<i+1<<" Information\n";
        cout<<"ID: "<<p[i].id<<"\n";
        cout<<"Name: "<<p[i].name<<"\n";
        cout<<"Salary: "<<p[i].salary<<"\n";
    }
}
