#include <iostream>
using  std::cout;
using  std::endl;

int main()
{
	//create array with random numbers from 0 to 99;
	double arr[30];
	for (int i = 0; i < 30; i++) {
		arr[i] = rand() % 100;
	}
	cout << "Source array: ";
	for (int i = 0; i < 30; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	//finding min and max
	int min = 0;
	int max = 0;
	for (int i = 0; i < 30; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	//Normalization of array
	for (int i = 0; i < 30; i++) {
		arr[i] = (arr[i] - min) / (max - min);
	}

	cout << "Normalized array: ";
	for (int i = 0; i < 30; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}