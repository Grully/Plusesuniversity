#include <iostream>

using namespace std;

int main()
{
    int hours1 = 0;
    int hours2 = 0;
    int mins1 = 0;
    int mins2 = 0;
    
    cout<<"Input first hours: ";
    cin >> hours1;
    cout<<"Input first minutes: ";
    cin >> mins1;
    cout<<"Input second hours: ";
    cin >> hours2;
    cout<<"Input first hours: ";
    cin >> mins2;
    
    int countOfHoursForTwenty = 12 - hours1 % 12;
    cout << countOfHoursForTwenty;
    int interval = hours2 + hours1;
    if(interval < countOfHoursForTwenty) 
    {
        int sol = ((hours1 + hours2)*(hours2 - hours1 + 1))/2 + 1;
    }

    return 0;
}

