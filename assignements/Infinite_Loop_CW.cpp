#include <iostream>
using namespace std;

int main() {
  
 double i, sum, average, count;

    sum = 0;
    count = 0;
  for (;;) {
      cout << "Please input a positive number:  " << endl;
    cin >> i;

    sum += i;
    count += 1;
    if (i == -1) {
        sum += 1;
        count-= 1;
        average = sum / count;
        cout << "Thank you" << endl;
        cout << "The total sum of the numbers you inputed is: " << sum << endl;
        cout << "And the average is: " << average << endl;
        break;
    }

  }
  return 0;
}