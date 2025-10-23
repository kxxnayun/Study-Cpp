#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle(const Circle& c);
	Circle() {
		radius = 1;
	}
	Circle(int r) {
		this->radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

Circle::Circle(const Circle& c) {
	this->radius = c.radius;
	cout << "복사 생성자 실행 radius = " << radius << endl;
}

int main() {
	Circle src(30);
	Circle dest(src);

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "사본의 면적 = " << dest.getArea() << endl;
}

// 복사생성자 구현하시오 -> const 적어야함 
// 값에의한전달 참조에의한전달
// 이거 시험에 나옴;
// 클론 어쩌고
// 프로그램적으로 설명
// const
// 복사생성자 포인터가 잇을때 동적으로 할당받은 어쩌고
// 깊은 복사

// 복사 생성자는 언제 호출되는가
// 1. 객체로 초기화하여 객체가 생성될 때
// 2. 값에 의한 호출로 객체가 전달될 때
// 3. 함수가 객체를 리턴할 때

// 참조 반환 시험에 x