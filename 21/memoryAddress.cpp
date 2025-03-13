#include <iostream>

int main() {
    
    //every variables like that are stored somwhere in your computer
    std::string name = "muaz";
    //the address of the place that stored is memory address

    //to find the memory address we can use address-of operator
    //to use it you can just put & at begginging of it

    std::cout << &name << '\n'; //0xca321ffcc0 => somthing like that => memory adress of that variable

    return 0;
}