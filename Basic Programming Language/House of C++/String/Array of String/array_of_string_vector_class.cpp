#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string>vehicle{"2 cars", "3 buses", "2 jeeps"};

    vehicle.push_back("3 bikes");                            // Strings can be added at any time with push_back

    for(int i=0; i<vehicle.size(); i++){
        cout<<vehicle[i]<<"\n";
    }
}
