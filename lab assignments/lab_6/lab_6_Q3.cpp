#include <iostream>
using namespace std;

void printTable(int n);

int main() {
    int num;

    cout << "Please enter a number: " << endl;
    cin >> num;

    printTable (num);


  return 0;
}

void printTable (int n) {
    for (int i= 1; i <= 10; i++){
        int mult= n * i;

        cout << n << " x " << i << " = " << mult << endl;
    }
}