#include <iostream>
using namespace std;

class Point {
	int x;
	int y;
public:
	Point();
	Point(int a, int b);
	void show() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

Point::Point() : Point(0, 0) {
	// 위임 생성자
}

Point::Point(int a, int b) : x(a), y(b) {
	// 타겟 생성자
}

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}

/*
기본 생성자: 클래스에 선언된 어떤 생성자도 없을 때 컴파일러가 자동으로 생성해주는 생성자
= 디폴트 생성자

class Circle() {
	CIrcle(); // 기본 생성자
}
*/