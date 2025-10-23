#include <iostream>
using namespace std;

void countEvenOdd(int arr[], int size);

int main() {
    int s = 3;
    int arr[s] {1,2,3};

    countEvenOdd (arr,s);


  return 0;
}

void countEvenOdd (int arr[], int size) {
    int count_odd =0;
     int count_even =0;
    for (int i=0; i < size; i++){
        if (arr[i] % 2 == 1) {
            count_odd= count_odd + 1;
        }else  {
            count_even= count_even + 1;
        }
    }

    cout << "The number of odd numbers you inputed is: " << count_odd << endl;
    cout << "The number of even numbers you inputed is: " << count_even << endl;

}