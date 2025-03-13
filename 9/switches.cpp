#include <iostream>

int main() {
    // The switch statement is used when we need to compare a variable against multiple values.
    // It is an alternative to multiple if-else statements.

    int day;

    std::cout << "Enter a number (1-7) to get the day of the week: ";
    std::cin >> day;

    // The switch statement checks the value of 'day'
    switch (day) {  
        case 1:  // If day == 1
            std::cout << "Sunday" << std::endl;
            break;  // 'break' stops the execution and exits the switch

        case 2:  // If day == 2
            std::cout << "Monday"   << std::endl;
            break;

        case 3:  // If day == 3
            std::cout << "Tuesday" << std::endl;
            break;

        case 4:  // If day == 4
            std::cout << "Wednesday" << std::endl;
            break;

        case 5:  // If day == 5
            std::cout << "Thursday" << std::endl;
            break;

        case 6:  // If day == 6
            std::cout << "Friday" << std::endl;
            break;

        case 7:  // If day == 7
            std::cout << "Saturday" << std::endl;
            break;

        default:  
            // The default case runs if no other case matches
            std::cout << "Invalid number! Please enter a number between 1 and 7." << std::endl;
    }

    return 0;
}
