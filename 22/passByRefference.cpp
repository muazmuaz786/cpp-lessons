#include <iostream>

void swap(int &x, int &y);

int main() {
    
    //to change a two variable(swap)

    int x = 10;
    int y = 100;
    int temp;

    temp = x;
    x = y;
    y = temp;
    //like that it will swap
    //but if we want to make a function that swaps two variables
    //we can just pass from parameter and swap inside
    //but this doesn't really change the real variable because we are just passing the value(copy) not the refference
    //so to pass the refference we can give the memory address. (put & at beggining of variable when we are declaring and intializing the function)

    swap(x, y);

    return 0;
}

void swap(int &x, int &y){

    int temp;

    temp = x;
    x = y;
    y = temp;

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    //now it will swap
}