/*
캡슐화
-> 객체의 구성 요소들을 캡슐로 싸서 보호하고 볼 수 없게 하는 것
서로 정보를 교환하고 통신하기 위해서 일부 요소들을 공개함

클래스
-> 객체를 정의하는 틀 혹은 설계도
클래스에 멤버 변수와 멤버 함수를 선언함
붕어빵 틀 -> 클래스, 붕어빵 -> 객체
*/

#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	donut.radius = 5;
	double area = donut.getArea();
	cout << "도넛 면적: " << area << endl;

	Circle pizza;
	pizza.radius = 10;
	area = pizza.getArea();
	cout << "피자 면적: " << area << endl;
}