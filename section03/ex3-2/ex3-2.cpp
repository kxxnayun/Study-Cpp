#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	int getArea();
};

int Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle r1;
	r1.width = 10;
	r1.height = 30;
	cout << "사각형의 면적: " << r1.getArea() << endl;
}