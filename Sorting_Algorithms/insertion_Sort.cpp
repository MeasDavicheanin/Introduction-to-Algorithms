#include<iostream>
using namespace std;
void insertionSort(int array[], int size) {
	for (int step = 1; step < size; step++) {
		int key = array[step];
		int j = step - 1;
		while (j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j -= 1;
		}
		array[j + 1] = key;
	}
}
void print(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
}

int main() {
	int array_number[]={10, 4, 5, 12,1,7,3,9};
	// highest to lowest
	int size = sizeof(array_number) / sizeof(array_number[0]);
	insertionSort(array_number, size);
	print(array_number, size);
	return 0;
}
