#include <iostream>
#include <string>
using namespace std;

int main() {
	string r;
	cout << "로미오 >> ";
	cin >> r;

	string j;
	cout << "줄리엣 >> ";
	cin >> j;

	if (r == "가위" && j == "보" || r == "바위" && j == "가위" || r == "보" && j == "바위") {
		cout << "로미오가 이겼습니다.";
	}
	else if (r == "가위" && j == "가위" || r == "바위" && j == "바위" || r == "보" && j == "보") {
		cout << "비겼습니다.";
	}
	else {
		cout << "줄리엣이 이겼습니다.";
	}

}