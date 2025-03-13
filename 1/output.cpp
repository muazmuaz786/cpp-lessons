#include <iostream> // This library allows us to use std::cout

int main() {
    // Printing a simple message to the console
    std::cout << "Hello, World!" << std::endl;
    // 'std::cout' is used for output, and 'std::endl' moves to the next line

    // Declaring some variables
    int age = 12;
    double height = 1.65;

    // Printing variables with text
    std::cout << "Age: " << age << std::endl; 
    // The '<<' operator is used to insert multiple values into std::cout

    std::cout << "Height: " << height << " meters" << std::endl; 
    // Text and numbers can be combined in a single output line

    // Printing calculations directly
    int a = 10, b = 5;
    std::cout << "Sum: " << a + b << std::endl; // Outputs: Sum: 15
    std::cout << "Product: " << a * b << std::endl; // Outputs: Product: 50

    // Using '\n' instead of 'std::endl' (more efficient)
    std::cout << "First line\n";
    std::cout << "Second line\n"; // '\n' moves to a new line, just like std::endl

    // Printing multiple values in one line
    std::cout << "Name: " << "John" << ", Age: " << 25 << std::endl; 
    // Outputs: Name: John, Age: 25

    // In C++, single quotes (' ') are used for single characters (char),
    // while double quotes (" ") are used for strings.

    std::cout << 'A';  // ✅ Correct: Outputs a single character 'A'
    std::cout << "Hello";  // ✅ Correct: Outputs a string "Hello"

    std::cout << 'Hello';  // ❌ Error: 'Hello' is not a single character

    return 0; // Ending the program
}
