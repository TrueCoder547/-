#include <iostream>
using namespace std;
int* InsertionSort(int array[], int size);
int main() {
	setlocale(NULL, "");
	const int size = 5;
	int array[size] = { 2,5,7,4,12 };
	int* ptrarray = new int[size];
	ptrarray = InsertionSort(array, size);
	return 0;
}
int* InsertionSort(int array[], int size) {
	for ( int i = 1; i < size; i++) {
		for (int j = i; j > 0 && array[j - 1] > array[j]; j--)  
			swap(array[j - 1], array[j]);
		for (int i = 0; i < size; i++) {
			cout << array[i] << "\t";
		}
		return array;
	}
} 