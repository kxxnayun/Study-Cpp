/*
생성자를 통해 객체를 초기화
1. 생성자의 목적은 객체가 생성될 때 필요한 초기 작업을 위함
2. 생성자 함수는 오직 한 번만 실행됨
3. 생성자 함수의 이름은 클래스 이름과 동일하게 작성되어야 함
4. 생성자 함수의 원형에 리턴 타입을 선언하지 않음
*/

#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
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

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}