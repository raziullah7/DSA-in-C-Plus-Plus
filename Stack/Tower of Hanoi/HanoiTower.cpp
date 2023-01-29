#include <iostream>
using namespace std;

long long i = 0;

void TowerOfHanoi(int n, char current, char temp, char target) {
	if (n > 0) {
		TowerOfHanoi(n - 1, current, target, temp);

		cout << "Step " << ++i << ": Move Disk " << n <<
			" from " << current << " to " << target << endl;

		TowerOfHanoi(n - 1, temp, current, target);
	}
}