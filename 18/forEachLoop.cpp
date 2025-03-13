#include <iostream>

int main() {
    
    //for each loop is used to loop through an array each time 
    //to use this:
    //  for({data type} {current element} : {array}){
    //      code ---
    //  }

    std::string students[] = {"spongbob", "sardor", "asadbek"};

    for(std::string student : students){
        std::cout << student << '\n';
    }

    
    //but we can just do with sizeof()
    double size = sizeof(students) / sizeof(std::string); //number of elements

    for (int i = 0; i < size; i++){
        std::cout << students[i] << '\n';
    }
    


    return 0;
}