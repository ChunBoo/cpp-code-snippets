
// 19 changes : 19 additions & 0 deletions19 throw_try_catch.cpp @ @-0, 0 + 1,
//     19 @ @
#include <exception>
#include <iostream>
#include <vector>

    void
    throwOutOfRangeException() {
  std::vector<int> v(3);
  v.at(3);
}

int main() {
  try {
    throwOutOfRangeException();
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  return 0;
}