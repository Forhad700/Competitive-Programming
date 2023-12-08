#include <iostream>
using namespace std;
int main()
{
    char s[][8] = {"2 cars", "3 buses", "2 jeeps"};       // column size must be specified
    for(int i=0; i<3; i++){
        cout<<s[i]<<"\n";
    }
}
