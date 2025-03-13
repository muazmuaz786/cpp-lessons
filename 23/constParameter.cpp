#include <iostream>

void printInfo(const std::string name, const int age);

int main() {

    std::string name = "sardor";
    int age = 2;
    
    printInfo(name, age);

    //const parameter = parameter that is effectly read-only code
    //                  code is more secure & conveys intent
    //                  useful for references and pointers

    //const parameter cannot be changed inside of the function

    return 0;
}

void printInfo(const std::string name, const int age){
    //we dont want our variable change in our code so we use const to not be changed

    std::cout << name << '\n';
    std::cout << age << '\n';

    //so if we try to change:
    age = 12;
    //error will come out because its const parameter and it never changes
}