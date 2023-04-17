#include <iostream>
using namespace std;

int seqsearch_max(int length, int S[]) {
	int max = 0;

	for (int i = 0; i < length; i++) {
		if (max < S[i]) max = S[i];
	}
		
	return max;
}

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 9, 7 };
	int length = sizeof arr / sizeof arr[0];

	int max = 0;
	cout << seqsearch_max(length, arr);

	return 0;
}