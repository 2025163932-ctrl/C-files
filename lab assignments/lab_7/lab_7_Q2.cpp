#include <iostream>
using namespace std;

string Even_or_Odd(int a);

int main() {
   int x;
   
   cout << "Please input your value:" << endl;
   cin >> x;

   string ans = Even_or_Odd (x);

   cout << "The number: " << x << " is: " << ans << endl;



  return 0;
}

string Even_or_Odd (int a) {
    
    if (a % 2 == 0) {
        return "Even";
    } else {
        return "Odd";
    }

}