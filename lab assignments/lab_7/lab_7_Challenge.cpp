#include <iostream>
using namespace std;

string calGrade (int r);

int main() {
   
    int grade;

    cout << "Please input the grade of the student: " << endl;
    cin >> grade;

    string final_Grade= calGrade(grade);

    cout <<"The student final grade is : " << final_Grade << endl;



  return 0;
}

string calGrade (int r) {
  if ( r >= 90) {
    return "A";
  } else if (r >=80) {
    return "B";
  } else if (r >=70) {
    return "C";
  } else if (r >=60) {
    return "D";
  } else {
    return "F";
  }
}