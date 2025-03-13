#include <iostream>

int main() {
    
    //for loop is a shorten way of while loop (same as JS)

    /*

    for (type(int) variable = start value; variable < count; add){
        code --- 
    }
    
    */

    //example
    for (int i = 1; i <= 10; i++){   
        std::cout << i <<std::endl;
    }
    //this prints i or index of the loop



    //break = break out of loop (stop the loop)
    //continue = skip current iteration

    for(int i = 0; i <= 20; i++){
        if(i == 13){
            //if the i is equal to 13 we skip the loop
            continue;
        }if(i == 18){
            //if the i is equal to 18 we stop the loop
            break;
        }

        std::cout << i << '\n';
    }
    

    return 0;
}