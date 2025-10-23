#include <iostream>
using namespace std;

int main() {
  
    double num_1, num_2;

    cout << "Please input a number: " << endl;
    cin >> num_1;

    cout << "Please input another number: " << endl;
    cin >> num_2;

    if (num_1 > num_2) {
        cout << "The first number: " << num_1 << ", is greater than the second number: " << num_2 << "." << endl;
    } else {
        cout << "The second number: " << num_2 << ", is greater than the first number: " << num_1 << "." << endl;
    }
  
  return 0;
}