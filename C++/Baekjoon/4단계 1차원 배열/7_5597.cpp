#include <iostream>
using namespace std;

int main() {
	int student[31] = { 0 }, n;
	for (int i = 0; i < 28; i++) {
		cin >> n;
		student[n] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (student[i] == 0) {
			cout << i << endl;
		}
	}
}