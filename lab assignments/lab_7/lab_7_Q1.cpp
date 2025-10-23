#include <iostream>
using namespace std;

int add (int a, int b);
int sub (int a, int b);
int mult (int a, int b);
double divide (int a, int b);

int main() {
   int x, y, check;
   
   cout << "Which Function would like to do (example 1= addition, 2 = subtraction, 3 = multiply, 4= division)"  << endl;
   cin >> check;

   cout << "Please input two values: " << endl;
   cin >> x;
   cin >> y;

   switch(check) {
    case 1: {
        int a = add (x,y);
        cout << "The total is: " << a;
        break;
    }

    case 2: {
        int s = sub (x,y);
        cout << "The total is: " << s;
        break;
    }

    case 3: {
        double m =mult (x,y);
        cout << "The total is: " << m;
        break;
    }

    case 4: {
        double d = divide (x,y);
        cout << "The total is: " << d;
        break;
    }

    default: {
        cout << "error";
    }
   }

 

  return 0;
}

int add (int a, int b) {
    return a + b;
}
int sub (int a, int b) {
    return a - b;
}
int mult (int a, int b){
    return a * b;
}

double divide (int a, int b) {
    if (b != 0){
      return  a / b;
    } else {
        return 0;
    }
}