#include<bits/stdc++.h>
using namespace std;
int main()
{
    struct person           // Local Structure which inside in main function()
    {
        int age;
        float salary;
    };
    struct person person1, person2;
    person1.age = 25;
    person1.salary = 1000.50;
    cout<<"Age: "<<person1.age<<"\n";
    cout<<"Salary: "<<person1.salary<<"\n";

    person2.age = 30;
    person2.salary = 900.50;
    cout<<"Age: "<<person2.age<<"\n";
    cout<<"Salary: "<<person2.salary<<"\n";
}
