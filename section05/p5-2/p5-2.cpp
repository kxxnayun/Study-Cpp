#include <iostream>
using namespace std;

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
}

int main() {
    int a, b, min, max;
    cout << "�� �� �Է�: ";
    cin >> a >> b;

    bool res = compare(a, b, min, max);

    if (res)
        cout << "����\n";
    else
        cout << "min = " << min << " max = " << max << endl;

    return 0;
}
