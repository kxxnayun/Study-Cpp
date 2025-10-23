#include <iostream>
using namespace std;

void twice(int& n) {
    n *= 2;
}

bool compare(int a, int b, int& min, int& max) {
    if (a == b) {
        min = max = a;
        return true;
    }
    else {
        if (a < b) {
            min = a;
            max = b;
        }
        else {
            min = b;
            max = a;
        }
        return false;
    }
};

int main() {
    int n = 12;
    twice(n);
    cout << n << endl;

    int a, b, min, max;
    cout << "두 수 입력: ";
    cin >> a >> b;

    bool res = compare(a, b, min, max);

    if (res)
        cout << "같음\n";
    else
        cout << "min = " << min << " max = " << max << endl;

    return 0;
}

// 참조 시험문제로 나옴
// 예를 들어 << 대략적인 소스코드로 적기 안에 생략해도 ㄱㅊ
// 참조 리턴 넘어감
// 얕은 복사, 깊은 복사, 복사 생성