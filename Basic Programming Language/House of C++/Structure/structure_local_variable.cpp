#include<bits/stdc++.h>
using namespace std;
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1, person2;                // Local variable
    person1.age = 25;
    person1.salary = 1000.50;
    cout<<"Age: "<<person1.age<<"\n";
    cout<<"Salary: "<<person1.salary<<"\n";

    person2.age = 30;
    person2.salary = 900.50;
    cout<<"Age: "<<person2.age<<"\n";
    cout<<"Salary: "<<person2.salary<<"\n";
}
