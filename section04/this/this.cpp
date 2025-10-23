#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() {
		this->radius = 1;
	}
	Circle(int radius) {
		this->radius = radius;
	}
	void setRadius(int radius) {
		this->radius = radius;
	}
};