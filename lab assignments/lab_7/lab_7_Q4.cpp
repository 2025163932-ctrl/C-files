#include <iostream>
using namespace std;

double circumference_of_Circle (double r);

int main() {
   
    double radius;

    cout << "Please enter the radius of the circle: " << endl;
    cin >> radius;

    double c = circumference_of_Circle (radius);

    cout << "The Circumference of the circle is: " << c << endl;


  return 0;
}

double circumference_of_Circle (double r) {
    double pi = 3.1415;

    double total = 2 * pi * r;
    return total;
}