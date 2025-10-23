#include <iostream>
using namespace std;

int main() {
  
    double price;

    cout << "please put the price of item: "<< endl;
    cin >> price;

    double new_price = (price > 100) ? price * .9 : price;
    cout << "The price will be: $" << new_price;


  
  return 0;
}