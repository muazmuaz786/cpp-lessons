#include <iostream>

int main(){
    //if statement is same as JS

    /*
    if (condition){
        code ---
    }else if(condition){
        code ---
    }else{
        code ---
    }
    */

    int age;

    std::cout << "enter your age: " << "\n";
    std::cin >> age;

    if(age >= 100){
        std::cout << "you are too old to enter this site" << "\n";
    }else if(age >= 18){
        std::cout << "welcome to this site" << "\n";
    }else if(age < 0){
        std::cout << "you weren't born yet" << "\n";
    }else if(age == 0){
        std::cout << "You are exactly 0 years old" << "\n";
    }else{
        std::cout << "You can't enter this site" << "\n";
    }
    
}