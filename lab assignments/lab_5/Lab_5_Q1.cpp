#include <iostream>
using namespace std;
int main(){
    char input[20];
    int VowelCount = 0;

    cout << "Enter a word or phrase: ";
    cin.getline(input, 20);

    for(int i = 0; input[i] != '\0'; i++){
        char ch = tolower(input[i]);
        if(ch == 'a' ||  ch == 'e'||  ch == 'i'||  ch == 'o'|| ch == 'u'){
            VowelCount++;
        }
    }
    cout << "You input: " << input << endl;
    cout << "Number of vowels: " << VowelCount << endl;

    return 0;
}