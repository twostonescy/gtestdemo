#include <algorithm>
#include <iostream>
#include <vector>

#include "math/add.h"
using namespace std;
class A {
 public:
  A() { a_ = 1; }
  A(A const &a) {
    std::cout << "A a" << std::endl;
    a_ = 2;
  }
  int a_;
};
int main() {
  Add(1, 2);
  A a;
  a.a_ = 4;
  std::vector<int> kk = {1, 2, 3};
  sort(kk.begin(), kk.end(), [=](auto i, auto j) mutable {
    //    a.a_=3;
    return i > j;
  });

  std::cout << "Hello, World!" << std::endl;
  return 0;
}
