#include <iostream>
using namespace std;

int main()
{
	//create array with random numbers from 0 to 99;
	int arr[50];
	for (int i = 0; i < 50; i++) {
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < 50; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	int count = 50;
	while (count != 0) {
		int max = 0;
		int swapper = 0;
		int index = 0;
		for (int i = 0; i < count; i++) {
			if (max < arr[i]) {
				max = arr[i];
				index = i;
			}
			if (i == count - 1) {
				swapper = arr[i];
				arr[i] = max;
				arr[index] = swapper;
				count--;
			}
			
		}

	}
	for (int i = 0; i < 50; i++) {
		cout << arr[i] << " ";
	}

}
