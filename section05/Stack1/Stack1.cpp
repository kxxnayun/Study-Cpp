// 272p 8번
#include <iostream>
using namespace std;

class mystack {
   int* p;
   int size;
   int tos;
public:
   mystack() :mystack(10) {

   }

    mystack(int size) {
        this->size = size;
        this->tos = 0;
        p = new int[size];
    }

    mystack(const mystack& src) {
        this->size = src.size;
        this->tos = src.tos;
        p = new int[size];
        for (int i = 0; i < tos; i++) {
            p[i] = src.p[i];
        }
    }

    ~mystack() {
        if (p) {
            delete[] p;
        }
    }

    bool push(int n) {
        if (tos == size) {
            return false;
        }
        p[tos++] = n;
        return true;
    }

   bool pop(int& n) {
      if (tos == 0) {
         return false;
      }
      n = p[--tos];
      return true;
   }
};

int main() {
    mystack st;
   /*for (int i = 0; i < 11; i++) {
      if (st.push(i)) {
         cout << i << ' ';
      }
       else {
         cout << endl << i + 1 << "번째 stack full" << endl;
      }
   }
   int n;
   for (int i = 0; i < 11; i++) {
      if (st.pop(n)) {
         cout << n << " ";
      }
      else {
         cout << endl << i + 1 << "번째 stack empty" << endl;
      }
   }*/

   mystack a(10);
   a.push(10);
   a.push(20);
   mystack b = a;
   b.push(30);

   int n;
   a.pop(n);
   cout << "스택 a에서 팝한 값" << n << endl;
   b.pop(n);
   cout << "스택 b에서 팝한 값" << n << endl;
}