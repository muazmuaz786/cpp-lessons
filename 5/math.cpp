#include <iostream>
#include <cmath>

int main(){

    //to work with math in iostream:
    //we can use max and min only in iostream

    int x = 1;
    int y = 10;
    double z;


    //This finds the smaller value between the two variables.
    z = std::min(x, y);

    std::cout << z << '\n';


    //This finds the larger value between the two variables.
    z = std::max(x, y);

    std::cout << z << '\n';




    //to work with real math in c++ we need to do "#include <cmath>" then:

    //this makes the x to the power of y
    z = pow(x, y); // 2^3 = 8

    std::cout << z << '\n';

    //that finds the square root of the number inside (9)
    z = sqrt(9);

    std::cout << z << '\n';

    //This finds the absolute value of the number inside (e.g., |-3| = 3).
    z = abs(-3);

    std::cout << z << '\n';

    //this see the round of the number inside (3.1456 => 3)
    z = round(3.1456);

    std::cout << z << '\n';

    //this rounds to up the number inside (3.14 => 4)
    z = ceil(3.14);

    std::cout << z << '\n';

    //this round down the number inside (10.9 => 10)
    z = floor(10.9);

    std::cout << z << '\n';
}