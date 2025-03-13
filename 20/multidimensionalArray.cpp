#include <iostream>

int main() {
    
    // multidimensional Array is a 2d array
    /*
               column
     r       |        |
         ------------------
     o       |        |
         ------------------
     w       |        | 
     

     like that
    */


    //so to make one
    //(data type) (name)[how many row][how many column] = {{-, -, -, '''},
    //                                                     {-, -, -, '''}}
    //but actually writing how many row it will be is not nessesary.
    //just the how many column it will be is nessesary

    //e.x
    std::string cars[][3] = {{"mustang", "corvette", "challenger"},
                            {"escape", "cobalt", "matiz"},
                            {"malibu", "equinox", "silverado"}};

    //and to print it
    //name[which row][which column]

    std::cout << cars[0][0] << ' '; // mustang
    std::cout << cars [0][1] << ' '; //corvette
    std::cout << cars[0][2] << '\n'; //challenger
    std::cout << cars [1][0] << ' '; //escape
    std::cout << cars [1][1] << ' '; //cobalt
    std::cout << cars [1][2] << '\n';//matiz
    std::cout << cars [2][0] << ' '; //malibu
    std::cout << cars [2][1] << ' ';//equinox
    std::cout << cars [2][2] << '\n';//silverado

    //to find how many rows, we have we can devide the size of all to just one row of it
    //to find how many column, we have we can divide the size of one row to [0][0]

    int rows = sizeof(cars) / sizeof(cars[0]);
    int column = sizeof(cars[0]) / sizeof(cars[0][0]); 

    //printing
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < column; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}