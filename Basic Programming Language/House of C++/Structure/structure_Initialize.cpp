#include<bits/stdc++.h>
using namespace std;
struct person
{
    int age;
    float salary;
};

struct person person1 = {25, 1000.50};
struct person person2 = {30, 900.50};
struct person person3 = person2;

int main()
{
    cout<<"Person 1\n";
    cout<<"Age: "<<person1.age<<"\n";
    cout<<"Salary: "<<person1.salary<<"\n";

    cout<<"\nPerson 2\n";
    cout<<"Age: "<<person2.age<<"\n";
    cout<<"Salary: "<<person2.salary<<"\n";

    cout<<"\nPerson 3\n";
    cout<<"Age: "<<person3.age<<"\n";
    cout<<"Salary: "<<person3.salary<<"\n";
}
