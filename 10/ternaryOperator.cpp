#include <iostream>

int main() {
    // The ternary operator is a shorthand for an if-else statement.
    // Syntax: condition ? value_if_true : value_if_false;

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    // Using if-else
    if (age >= 18) {
        std::cout << "You are an adult." << std::endl;
    } else {
        std::cout << "You are a minor." << std::endl;
    }

    // Using the ternary operator to do the same thing in one line
    std::cout << (age >= 18 ? "You are an adult." : "You are a minor.") << std::endl;

    return 0;
}
