#include <iostream>
using namespace std;
int bubbleSort(int* p, int size);

int main() {
	int array[100];
	int size;
	cin >> size;
	int swapNum = 0;

	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}

	cout << bubbleSort(array, size);
	return 0;
}

int bubbleSort(int* p, int size) {
	int num = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (p[j] > p[j + 1]) {
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
				num++;
			}
		}
	}
	return num;
}
