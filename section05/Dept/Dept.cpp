// 12¹ø
#include <iostream>
using namespace std;

class Dept {
    int size;
    double* scores;
public:
    Dept(int size, double scores[]) {
        this->size = size;
        this->scores = new double[size];
        for (int i = 0; i < size; i++) {
            this->scores[i] = scores[i];
        }
    }

    Dept(const Dept& dept) {
        size = dept.size;
        scores = new double[size];
        for (int i = 0; i < size; i++) {
            scores[i] = dept.scores[i];
        }
    }

    ~Dept() {
        delete[] scores;
    }

    int getSize() {
        return size;
    }

    void show() {
        for (int i = 0; i < size; i++) {
            cout << scores[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    double scores[] = { 10, 20, 30, 40, 50 };
    Dept cs(5, scores);
    cout << cs.getSize() << endl; 
    cs.show();   

    Dept copy = cs;
    copy.show();
}
