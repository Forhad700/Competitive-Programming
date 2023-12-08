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
    if(person1.age==person2.age && person1.salary==person2.salary){
        cout<<"Person 1 equal to person 2";
    }
    else{
        cout<<"Person 1 not equal to person 2";
    }
}
