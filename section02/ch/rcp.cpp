#include <iostream>
#include <string>
using namespace std;

int main() {
	string r;
	cout << "�ι̿� >> ";
	cin >> r;

	string j;
	cout << "�ٸ��� >> ";
	cin >> j;

	if (r == "����" && j == "��" || r == "����" && j == "����" || r == "��" && j == "����") {
		cout << "�ι̿��� �̰���ϴ�.";
	}
	else if (r == "����" && j == "����" || r == "����" && j == "����" || r == "��" && j == "��") {
		cout << "�����ϴ�.";
	}
	else {
		cout << "�ٸ����� �̰���ϴ�.";
	}

}