/*
ĸ��ȭ
-> ��ü�� ���� ��ҵ��� ĸ���� �μ� ��ȣ�ϰ� �� �� ���� �ϴ� ��
���� ������ ��ȯ�ϰ� ����ϱ� ���ؼ� �Ϻ� ��ҵ��� ������

Ŭ����
-> ��ü�� �����ϴ� Ʋ Ȥ�� ���赵
Ŭ������ ��� ������ ��� �Լ��� ������
�ؾ Ʋ -> Ŭ����, �ؾ -> ��ü
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
	cout << "���� ����: " << area << endl;

	Circle pizza;
	pizza.radius = 10;
	area = pizza.getArea();
	cout << "���� ����: " << area << endl;
}