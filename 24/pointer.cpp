#include <iostream>

int schoolIsBad(int *pointer);

int main() {
    
    //pointer = variable that stores a memory address of another variable
    //          somtimes its easier to work with an address


    // & address-of operator
    // * dereference operator

    // when making a pointer you should:
    // (data type of the variable) *p(variable name) = &(variable name)

    //normal variable
    std::string name = "zafar";
    //pointer
    std::string *pName = &name;

    std::cout << pName << '\n';//just the memory address
    
    //to get the value of it:
    std::cout << *pName << '\n'; //zafar




    //other examples
    int age = 12;
    int *pAge = &age;

    //but the arrays cannot be assigned normaly
    std::string names[] = {"zafar", "chorniy", "farux", "asadbek", "asus"};
    //std::string *pNames = &names; // ***error***
    //this is because the arrays are just a memory address
    //to prove this if you will print the array it will come out just a memmory addres
    //so to make a pointer for arrays:

    std::string *pNames = names; 
    //just like that



    //null pointer is a pointer that doesn't point anything
    //if you don't want to point anything its better to use "nullptr"

    int *pointer = nullptr;
    //and this is a pointer that doesn't point anything

    //and to assign a value on this
    int x = 123;
    pointer = &x;


    schoolIsBad(pointer);








    // Dynamic memory allocation = Allocating memory during runtime
    // We use 'new' to allocate and 'delete' to free memory

    // 🔹 Why do we need dynamic memory?
    // - If we don't know how much memory we need in advance
    // - If we want to create flexible data structures like linked lists
    // - its useful when we don't know how much memory we will need.z

    // 🔹 How to allocate dynamic memory?
    // - Use 'new' to allocate memory
    // - Use 'delete' to free memory (to prevent memory leaks)

    // ✅ Example 1: Dynamically allocating a single integer
    int *pNum = new int;  // Allocate memory for one integer (예약)
    *pNum = 42;  // Store value
    std::cout << "Memory address of pNum: " << pNum << '\n'; // Print memory address
    std::cout << "Value at pNum: " << *pNum << '\n'; // Print value (42)

    // ✅ Example 2: Dynamically allocating an array
    int size;
    std::cout << "Enter array size: ";
    std::cin >> size; // User enters array size at runtime

    int *pArray = new int[size]; // Allocate memory for an array

    // Assign values
    for (int i = 0; i < size; i++) {
        pArray[i] = (i + 1) * 10;
    }

    // Print array values
    std::cout << "Dynamic array values: ";
    for (int i = 0; i < size; i++) {
        std::cout << pArray[i] << " ";
    }
    std::cout << '\n';

    // ✅ Example 3: Null pointer (for safety)
    int *pNull = nullptr; // A pointer that doesn't point to anything yet
    pNull = new int(100); // Now it points to a dynamically allocated integer
    std::cout << "Value at pNull: " << *pNull << '\n';

    // ✅ Free allocated memory (VERY IMPORTANT!)
    delete pNum;  // Free single integer
    delete[] pArray; // Free array
    delete pNull; // Free the null pointer allocation

    return 0;
}

//to make a pointer as a parameter in function

//                  \/ you should put this
int schoolIsBad(int *pointer){
    return -1;
}