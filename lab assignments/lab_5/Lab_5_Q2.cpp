#include <iostream>
#include <cctype> // for isdigit() and isalpha()
using namespace std;

int main() {
    char input[30];

    cout << "Enter a string, can include letters, digits, and spaces): " << endl;
    cin.getline(input, 30);

    int l_c = 0;
    int d_c = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i])) {
            l_c++;
        }
        else if (isdigit(input[i])) {
            d_c++;
        }
    }
    cout << "letters: " << l_c << endl;
    cout << "Digits: " << d_c << endl;

    return 0;
}