#include <iostream>
using namespace std;


int main() {

    double grade [3] [4] , average = 0, sum = 0;

    for (int i=0 ; i < 3; i++) {
        for ( int j=0; j < 4 ; j++) {
            cout<< "Please enter the grade for the student for the subject: " << endl;
            cin >> grade [i] [j];
        }
    }

    for (int j=0 ; j < 3; j++) {
        for ( int i=0; i < 4; i++) {

        sum = sum + grade [i] [j];
        average = sum / 4;
        }
        cout << "The sum of the student is:" << sum << endl;
         cout << "The average of the student is:" << average << endl;
         sum = 0;
         average = 0;
    }

    return 0;
}