#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Book {
    char* title;
    int price;
public:
    Book(const char* title, int price);
    Book(const Book& book);
    ~Book();
    void set(const char* title, int price);
    void show() { cout << title << "," << price << endl; }
};

Book::Book(const char* title, int price) {
    this->price = price;
    int len = strlen(title);
    this->title = new char[len + 1];
    strcpy(this->title, title);
}

Book::Book(const Book& book) {
    this->price = book.price;
    int len = strlen(book.title);
    this->title = new char[len + 1];
    strcpy(this->title, book.title);
    cout << "���� ������ ����. ���� ��ü�� �̸�: " << this->title << endl;
}

Book::~Book() {
    delete[] title;
}

void Book::set(const char* title, int price) {
    this->price = price;
    delete[] this->title;
    int len = strlen(title);
    this->title = new char[len + 1];
    strcpy(this->title, title);
}

int main() {
    Book cpp("��ǰC++", 10000);
    Book java = cpp;
    java.set("��ǰ�ڹ�", 12000);
    cpp.show();
    java.show();
}
