#include <iostream>
using namespace std;

int main() {
  
    double storage[6], product;

    product = 1;

  for (double i = 0; i < 6; i++) {
    cout << "Please enter a number: " << endl;
    cin >> i;
    product= product * i;
  }
  cout << "the total product of the numbers you inputed is " << product <<"." << endl;
  
  return 0;
}