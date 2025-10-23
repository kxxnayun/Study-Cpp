#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() :Circle(1) {}
	Circle(int radius) {
		this->radius = radius; // radius = r 이렇게 쓰는 거랑 뭐가 다른지
		cout << "원 생성\n";
	}
	~Circle() {
		cout << "원 소멸\n";
	}
	void setRadius(int r) {
		radius = r;
	}
	int getRadius() {
		return radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

void increase(Circle& c) { //매개변수(parameter), 형식(formal) 인수 // 갑자기 &를 추가햇음 왜지;
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main() {
	Circle waffle(30);
	increase(waffle); //인수(argument), 실(actual) 인수
	cout << waffle.getRadius() << endl;
}