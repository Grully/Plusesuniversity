#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
    string time = "";
    cout << "Input time in format hh:mm:ss : "; 
    cin >> time;
    int hours = stoi(time.substr(0, 2));
    int minutes = stoi(time.substr(3, 2));
    int seconds = stoi(time.substr(6, 2));

    string addtime = "";
    cout << "Input additional time in format hh:mm:ss : ";
    cin >> addtime;
    int addhours = stoi(addtime.substr(0, 2));
    int addminutes = stoi(addtime.substr(3, 2));
    int addseconds = stoi(addtime.substr(6, 2));

    int dayscounter = (((seconds + addseconds)/60 + minutes + addminutes)/60 + hours + addhours)/24;
    


    if (dayscounter == 0) {
        cout << ((seconds + addseconds) / 60 + minutes + addminutes) / 60 + hours + addhours << ":" 
            << ((seconds + addseconds) / 60 + minutes + addminutes) % 60
    }
    else {
        cout << dayscounter;
    }


    
    
}
