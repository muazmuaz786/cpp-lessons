#include <iostream>

int main() {
    /*
    while (condition){
        code 
    }
    like that if the condition is true it runs the code again and again
    */

    std::string name;

    //this says if the name is empty
    while (name.empty()){
        
        // ask for the name again
        std::cout << "enter your name: \n";
        std::getline(std::cin, name);

    }
    
    std::cout << "hello " << name << std::endl;





    //do while loop is when we need to ask the same thing as the while loop then we need to do while loop, we use do while loop


    /*

    do{
        code
    } while (condition);

    this first do the code normally then does the while loop

    */

    //example:

    int number;

    do
    {
        std::cout << "enter a positive number: \n";
        std::cin >> number;
    } while (number < 0);

    //if we do just in while loop it will not work because if we set as a default it will be 0 and it will just skip the while loop cause it's false
    //so to pervent this by asking first to get the number then do the while loop
    
    return 0;
}