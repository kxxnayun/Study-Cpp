// 272페이지 7번
#include <iostream>
using namespace std;

class MyStack {
   int p[10], tos;
public:
   MyStack() {
      this->tos = 0;
   }
   bool push(int n) {
      if (tos == 10) {
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
   MyStack st;
   for (int i = 0; i < 11; i++) {
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
   }
}