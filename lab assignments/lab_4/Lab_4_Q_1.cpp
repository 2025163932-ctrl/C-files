#include <iostream>
using namespace std;

int main() {
  
   int b = -1;
   int array [10];
   int i = 0;
    int j = 0;

   while (i < 10) {
     cout << "Please enter a number: " << endl;
        cin >> array [i];
        if (array [i] == b) {
            break;
        }
    i++;
   }
    while ( j < 10) {
        cout << array [j] << endl;
        if (array [j] == -1) {
            break;
        }
        j++;
    }


  return 0;
}