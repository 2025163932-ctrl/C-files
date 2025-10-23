#include <iostream>
using namespace std;

int main() {
  
    double Angle_1, Angle_2, Angle_3, Sum_of_angles;

    cout << "Please input the three angles" << endl;
    cin >> Angle_1;
    cin >> Angle_2;
    cin >> Angle_3;

    Sum_of_angles = Angle_1 + Angle_2 + Angle_3;
    
    if (Sum_of_angles == 180) {
        cout << "The shape is a triangle" << endl;
    } else {
        cout << "The shape is not a triangle" << endl;
    }
  
  return 0;
}