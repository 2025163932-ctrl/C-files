#include <iostream>
using namespace std;

int main() {
    
    int array [3] [3] , sum = 0;

for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
           cout << "Please input a number in the row " << i + 1 << " And column " << j + 1 << ":" << endl;
           cin >> array [i] [j];
        }
    }
    
for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
          sum =  sum + array [i] [j];
        }
        cout << " The sum of row " <<  i + 1 << " is " << sum << endl;
        sum = 0;
    }

    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
          sum =  sum + array [i] [j];
        }
        cout << " The sum of column " << j + 1 << " is " << sum << endl;
        sum = 0;
    }
  
  return 0;
}