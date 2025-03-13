#include <iostream>

int main(){
    int num; //declaration
    num = 5; //initialization

    int num = 5; // declaration + initialization

    // integer (whole number)
    int number = 5;

    //double (decimal number)
    double decimal = 5.5;

    //char (single character)
    char letter = 'a';

    //bool (true or false)
    bool boolian_example = true;

    //string (multiple characters)
    //we should put the text in "" <-- these
    std::string string_example = "Hello, World!";

    //const (constant)
    //We cannot change the value of a constant after initialization.
    //the name of the constant is in all capital letters
    const int CONSTANT = 5;



    // In C++, single quotes (' ') are used for single characters (char),
    // while double quotes (" ") are used for strings.

    char a = 'A';  // ✅ Correct: Outputs a single character 'A'
    std::string S = "Hello";  // ✅ Correct: Outputs a string "Hello"

    std::string st = 'Hello';  // ❌ Error: 'Hello' is not a single character

    return 0;
}