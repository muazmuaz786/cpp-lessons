#include <iostream>

int main() {
    //sizeof() is really shows the size of somthing in bytes

    double gpa = 3;
    std::cout << sizeof(gpa) << " bytes\n";

    char grade = 'f';
    std::cout << sizeof(grade) << " bytes\n";

    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::cout << sizeof(grades) << " bytes\n";

    //and we can use sizeof() to find arrays element number
    std::cout << sizeof(grades) / sizeof(char) << '\n';

    //this works because if we divide with the sum of all of it and the one of it it will come out how much there is
    //number of elements X each size = total size,
    //total size / each size = number of elements

    return 0;
}