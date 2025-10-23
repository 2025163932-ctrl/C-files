  #include <iostream>
using namespace std;

int main() {
  int storage[5], product;



  for (int i = 0; i < 5; i++) {
    cout << "Please enter a number " << i + 1 << ":" << endl;
    cin >> storage[i];
  }
  for (int i = 0; i < 5; i++) {
    cout << "The " << i + 1 <<  " number is : " << storage [i] << endl;
  }
  
  return 0;
}