#include <iostream>
#include <string>

using namespace std;

void foo() {
  string s{"412503"};
  cout << s.find('0');
}

int main() { foo(); }