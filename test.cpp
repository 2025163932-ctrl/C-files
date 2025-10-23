#include <iostream>
using namespace std;

int sum(int k, int count = 0) {
  if (k > 0) {

    return k + sum (count + 2) + count;
  } else {
    return 0;
  }
}


int main() {
  int result = sum(5);
  cout << result;
  return 0;
}
