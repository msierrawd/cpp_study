// Using cin to read a string from the keyboard.
// NOTE: Will only output the first word and stops when it encounters a whitespace!

#include <iostream>
using namespace std;

int main(){

    char str[80]; 

    cout << "Enter a string: ";
    cin >> str; // read string from keyboard
    cout << "Here is your string: ";
    cout << str;


    return 0;
}