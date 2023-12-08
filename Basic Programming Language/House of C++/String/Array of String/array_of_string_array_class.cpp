#include <iostream>
#include<array>
using namespace std;
int main()
{
    array<string, 3>vehicle{"2 cars", "3 buses", "2 jeeps"};
    for(int i=0; i<3; i++)
        cout<<vehicle[i]<<"\n";
}
