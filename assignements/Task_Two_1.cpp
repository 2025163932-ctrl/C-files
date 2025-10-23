#include <iostream>
using namespace std;

int main() {
  
    string password, User_input;

    password = "121508";

    cout << "Please enter your password: " << endl;
    cin >> User_input;

    if (User_input == password) {
        cout << "Access granted";
    }
    else {
        cout << "Access denied";
    }
  
  return 0;
}