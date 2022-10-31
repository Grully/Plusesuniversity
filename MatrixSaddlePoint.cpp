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
    int mininstring[3];
    int maxincolumn[4];
    int a = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if(j == 0) {
                a = matrix[i][j];
            }
            if(a > matrix[i][j]) {
                a = matrix[i][j];
            }
            if(j == 3){
                mininstring[i] = a;
            }
        }
    }
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if(j == 0) {
                a = matrix[j][i];
            }
            if(a < matrix[j][i]) {
                a = matrix[j][i];
            }
            if(j == 2){
                maxincolumn[i] = a;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if(maxincolumn[j] == mininstring[i]) {
                cout << "There's a saddle point in the matrix and it is: a" << "[" << i+1 << "]" << "[" << j+1 << "]" << "= " << matrix[i][j] << "; ";
            }
        }
    }
}
