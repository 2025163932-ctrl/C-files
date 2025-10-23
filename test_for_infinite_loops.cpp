#include <iostream>
using namespace std;

int main() {
  int user_input;
  for (;;) {
    cout << "Please enter a positive number: . \n";
    cin >> user_input;
  if (user_input < 0)
    cout << "You've enter a negative number. It will now stop the loop. \n";
    break;
  }

    cout << "Good bye.";
  return 0;
}