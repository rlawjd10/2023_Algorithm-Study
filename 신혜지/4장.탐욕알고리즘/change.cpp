#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int coin5 = n / 5;
	
	if(n % 5 == 0) {
		cout << coin5 << endl;
		return 0;
	}
	
	while (coin5 >= 0) {
		int coin2 = (n - (coin5 * 5)) / 2;
		if((n - (coin5 * 5)) % 2 == 0) {
			cout << coin5 + coin2 << endl;
			return 0;
		}
		coin5--;
	}
	
	cout << "-1" << endl;
	return 0;
}
