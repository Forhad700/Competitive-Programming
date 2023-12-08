#include <iostream>
using namespace std;
int main()
{
    for(int i=0; i<5; i++){
        if(i==3){
            continue;                      // continue can be used in loop but not be used in switch case
        }
        cout<<i<<endl;
    }
}
