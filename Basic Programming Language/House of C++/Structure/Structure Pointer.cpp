#include<bits/stdc++.h>
using namespace std;
struct point{
    int x,y;
};

int main()
{
    struct point p1 = {1,2};
    struct point* p2 = &p1;
    cout<<p2 ->x<<" "<<p2 ->y;
}
