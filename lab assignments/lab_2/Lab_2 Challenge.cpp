#include <iostream>
using namespace std;

int main() {
  
    double age;

    cout << "Please input the age of viewer" << endl;
    cin >> age;
   
    
    if (age < 5) {
                cout << "the price is free" << endl;
    } else if (age <= 12) {
        cout << "The price is $8 dollars" << endl;
    }  else if ( age <= 59) {
        cout << "the price is $12 dollars" << endl;
    } else { 
        cout << "The price is $6 dollars" << endl;
     }
  
  return 0;
}