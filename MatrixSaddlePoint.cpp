#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int matrix[3][4];
    cout << "Enter the matrix: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "Matrix is: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
            if (j == 3) {
                cout << endl;
            }
        }
    }
    int maxinstring[3];
    int maxinpillar[4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
            if (j == 3) {
                cout << endl;
            }
        }
    }

}
