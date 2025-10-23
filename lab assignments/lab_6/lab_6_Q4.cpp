#include <iostream>
using namespace std;

void printStars(int n);

int main() {
    int num_of_stars;

    cout << "Please enter a number of stars: " << endl;
    cin >> num_of_stars;

    printStars (num_of_stars);


  return 0;
}

void printStars (int n) {
    for (int i= 0; i < n; i++){
        cout << '*';

    }
}