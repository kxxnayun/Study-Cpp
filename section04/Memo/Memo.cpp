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
	Memo a("1:20", "캠프"), b("2:20", "송별회");
	a.show();
	if (a.isSameDate(b)) {
		cout << "같은 날" << endl;
	}
	else {
		cout << "다른 날" << endl;
	}

	cout << b.getDate() << "에 " << b.getContent() << endl;
}