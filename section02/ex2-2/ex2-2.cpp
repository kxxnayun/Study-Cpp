#include <iostream>
using namespace std;

double area(int r);

double area(int r) {
	return 3.14 * r * r;
}

int main() {
	int n = 3;
	cout << "¸éÀûÀº " << area(n);
}