#include <iostream>
using namespace std;

void printsum(int a, int b);

int main() {

    int num_1,num_2;

    cout << " please enter a number: " << endl;
    cin >> num_1;

    cout << " please enter another number: " << endl;
    cin >> num_2;

    printsum (num_1, num_2);

  return 0;
}

void printsum (int a, int b) {
    int sum = a + b;

    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
}