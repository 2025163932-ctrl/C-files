#include <iostream>
using namespace std;

int main() {

  int sum_of_even = 0;

  for (int i = 2; i < 20; i++) {
    if (i % 2 == 0) {
        sum_of_even = sum_of_even + i;
    }
  }
  cout << "The total sum of all even is: " << sum_of_even << endl;
  return 0;
}