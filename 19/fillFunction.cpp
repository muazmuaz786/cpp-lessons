#include <iostream>

int main() {
    
    //fill function is a range of elements with a specified value
    // fill(begin, end, value)

    std::string foods[99];

    //we write the begin and end with the name of array to show which array is it (array name + untill which index)
    fill(foods, foods + 33, "Pizza");
    fill(foods + 33, foods + 66, "Burger");
    fill(foods + 66, foods + 99, "sushi");

    
    for(int i = 0; i < sizeof(foods)/sizeof(std::string); i++){
        std::cout << foods[i] << "\n";
    }
    

    return 0;
}