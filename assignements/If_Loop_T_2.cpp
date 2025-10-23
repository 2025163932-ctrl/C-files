#include <iostream>
using namespace std;

int main() {

    int storage[6], max;

    max = 0;

    for (int i = 0; i < 6; i++) {
        cout << "Enter a  random number:" << endl;
        cin >> storage[i];
    if (storage[i] > max) {
         max = storage[i];
    }
   
  }
  cout << "the max of the numbers you inputed is " << max <<"." << endl;
  
  return 0;
}