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
    int maxincolumn[4];
    int max = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if(j == 0) {
                max = matrix[i][j];
            }
            if(max <= matrix[i][j]) {
                max = matrix[i][j];
            }
            if(j == 3){
                maxinstring[i] = max;
            }
        }
    }
    
    max = 0;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if(j == 0) {
                max = matrix[j][i];
            }
            if(max <= matrix[j][i]) {
                max = matrix[j][i];
            }
            if(j == 2){
                maxincolumn[i] = max;
            }
        }
    }
}
