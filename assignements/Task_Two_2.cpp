#include <iostream>
using namespace std;

int main() {
  
    int age;

    cout << "Please enter your age: " << endl;
    cin >> age;

    if (age < 13) {
        cout << "You are a child";
    }
    else if (age <= 19) {
        cout << "You are a teenager";
    }
    else {
        cout << "You are a adult";
    }
  
  return 0;
}