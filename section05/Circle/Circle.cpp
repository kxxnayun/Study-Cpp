#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() :Circle(1) {}
	Circle(int radius) {
		this->radius = radius; // radius = r �̷��� ���� �Ŷ� ���� �ٸ���
		cout << "�� ����\n";
	}
	~Circle() {
		cout << "�� �Ҹ�\n";
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

void increase(Circle& c) { //�Ű�����(parameter), ����(formal) �μ� // ���ڱ� &�� �߰����� ����;
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main() {
	Circle waffle(30);
	increase(waffle); //�μ�(argument), ��(actual) �μ�
	cout << waffle.getRadius() << endl;
}