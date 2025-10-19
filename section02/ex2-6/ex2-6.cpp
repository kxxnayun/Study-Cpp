#include <iostream>
using namespace std;

int main() {
	cout << "주소를 입력하세요: ";

	char address[100];
	cin.getline(address, 100, '\n');

	cout << "주소: " << address;
}

// getline(): enter 입력 전까지 하나의 문자열로 인식