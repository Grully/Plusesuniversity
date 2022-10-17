#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int main()
{

    try {

        ifstream input("C:\\Users\\Admin\\source\\repos\\plusesuniversity\\PirateTreasure\\input.txt");
        string s;
        getline(input, s);
        //        int* array = new int[stoi(s)];
        double x = 0;
        double y = 0;
        const double pi = 3.14159265358979323846;
        while (!input.eof()) {
            string s;
            getline(input, s);
            int a = s[0] - 48;
            int b = stoi(s.substr(2));
            double angle = (a * pi / 4) - pi / 4;
            x += b * sin(angle);
            y += b * cos(angle);
        }

        input.close();
        x = round((x * 1000)) / 1000;
        y = round((y * 1000)) / 1000;
        ofstream of("C:\\Users\\Admin\\source\\repos\\plusesuniversity\\PirateTreasure\\output.txt");
        of << x << " " << y << endl;
        of.close();
    }
    catch (exception e) {
        cout << "Whoops, there's an exception here. Sure, you have an invalid input file";
    }
}
