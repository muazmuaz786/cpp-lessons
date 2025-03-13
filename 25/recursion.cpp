#include <iostream>

void walk_iterative(int steps);
void walk_recursive(int steps);

int main() {
    //recursion = a programming technique where a function repeats itself
    //            within break or a complex concept into a repeatable single step

    //(iterative vs recursive)

    //advantages = less code is cleaner, useful for searching algorithms
    //disadvantages = uses more memory, slower



    return 0;
}

//for iterative is just what we used to do like using for moon
void walk_iterative(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "take a step\n";
    }
}


//for recursive, it calls itself within the function
void walk_recursive(int steps){
    //the base case(when we stop)
    if(steps > 0){
        std::cout << "take a step\n";
        //like that we are calling again and again untill steps becomes 0
        walk_recursive(steps - 1);
    }
}