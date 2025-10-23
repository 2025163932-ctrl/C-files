#include <iostream>
using namespace std;


int main() {

    double grade [3] [4];

    for (int i=0 ; i < 3; i++) {
        for ( int j=0; j < 4 ; j++) {
            cout<< "Please enter the grade for the student for the subject: " << endl;
            cin >> grade [i] [j];
        }
    }

    for (int i=0 ; i < 3; i++) {
        for ( int j=0; j < 4; j++) {
            cout<< grade [i] [j];
        }
        cout << endl;
    }

    return 0;
}