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
	cout << "���� ������ ���� radius = " << radius << endl;
}

int main() {
	Circle src(30);
	Circle dest(src);

	cout << "������ ���� = " << src.getArea() << endl;
	cout << "�纻�� ���� = " << dest.getArea() << endl;
}

// ��������� �����Ͻÿ� -> const ������� 
// ������������ ��������������
// �̰� ���迡 ����;
// Ŭ�� ��¼��
// ���α׷������� ����
// const
// ��������� �����Ͱ� ������ �������� �Ҵ���� ��¼��
// ���� ����

// ���� �����ڴ� ���� ȣ��Ǵ°�
// 1. ��ü�� �ʱ�ȭ�Ͽ� ��ü�� ������ ��
// 2. ���� ���� ȣ��� ��ü�� ���޵� ��
// 3. �Լ��� ��ü�� ������ ��

// ���� ��ȯ ���迡 x