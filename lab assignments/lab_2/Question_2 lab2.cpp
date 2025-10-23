#include <iostream>
using namespace std;

int main() {
  
    double Grade;

    cout << "Please input the student grade: " << endl;
    cin >> Grade;

    if (Grade >= 50) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail " << endl;
    }
  
  return 0;
}