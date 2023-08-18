#include <iostream>
using namespace std;

int main() {
    int x = 1;
auto valueLambda = [=]() { cout << x << endl; };
auto refLambda = [&]() { cout << x << endl; };  //The first lambda captures x by value at the point in which valueLambda is defined. 
                                                //Hence it gets the current value of 1. 
                                                //But the refLambda captures a reference to the local so it sees the up to date value
x = 13;
  valueLambda();
  refLambda() ;
}