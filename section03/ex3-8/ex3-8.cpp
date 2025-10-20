#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle() {
	cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle gc1(1);
Circle gc2(2);

void f() {
	Circle fc1(3);
	Circle fc2(4);
}

int main() {
	Circle mc1(5);
	Circle mc2(6);
	f();
}

// 구조체 안 했음