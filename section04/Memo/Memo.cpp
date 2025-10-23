#include <iostream>
using namespace std;

class Memo {
private:
	string date, content;
public:
	Memo(string d, string c);
	void show();
	bool isSameDate(Memo b);
	string getDate();
	string getContent();
};

Memo::Memo(string d, string c) {
	date = d;
	content = c;
}

void Memo::show() {
	cout << date << ' ' << content << endl;
}

bool Memo::isSameDate(Memo b) {
	if (date == b.date) {
		return true;
	}
	else {
		return false;
	}
}

string Memo::getDate() {
	return date;
}

string Memo::getContent() {
	return content;
}

int main() {
	Memo a("1:20", "ķ��"), b("2:20", "�ۺ�ȸ");
	a.show();
	if (a.isSameDate(b)) {
		cout << "���� ��" << endl;
	}
	else {
		cout << "�ٸ� ��" << endl;
	}

	cout << b.getDate() << "�� " << b.getContent() << endl;
}