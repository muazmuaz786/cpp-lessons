#include <iostream>

int main() {

    //to work with random numbers you should first set a random
    //srand(initializer)
    srand(time(NULL));
    //we can do like that every time because it does by the time

    //rand() is just basiclly a random number between 32767 ~ 0 controlled by initialiser (srand())
    int num1 = rand();

    //but to make a number between a number we like, we can do
    //(rand() % the maximum) + 1  --- this will be random just between 1 and the maximum
    num1 = (rand() % 6) + 1;
 
    std::cout << num1;

    return 0;
}