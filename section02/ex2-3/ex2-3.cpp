#include <iostream>
using namespace std;

int main() {
	cout << "너비: ";

	int width;
	cin >> width;

	cout << "높이: ";

	int height;
	cin >> height;

	int area = width * height;
	cout << "면적: " << area;
}