#include <iostream>
using namespace std;

 
int main() {

 int array [10],square, i;

  cout << "Please input ten numbers: " <<endl;

for (i = 0; i < 10; i++) {


  cin >> array [i];

  square = array [i] * array [i];

  cout << "The square of " << array [i] << " is : " << square << endl;

}


  return 0;
}