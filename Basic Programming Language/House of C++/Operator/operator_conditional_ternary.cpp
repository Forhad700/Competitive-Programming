#include <iostream>
using namespace std;
int main()
{
    int a=10, b=5, c;
    c = a>b ? a : b;                 //   part1  ?  part2  :  part3
    cout<<c<<endl;                        // if part1 true then returns part2,  otherwise part3


    int x = 3;
    (x%2==0) ? cout<<x<<": Even" : cout<<x<<": Odd";      //  part1  ? part2  :  part3
}
