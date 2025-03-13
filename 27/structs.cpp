#include <iostream>

//struct is a frame of somthing

//to make a struct:
//       \/ the name of struct
struct students{
    std::string name;
    int age;
    double gpa;
    bool exrolled;
};
//like that


struct structs{
    std::string name;
    // to make a default value of somthing
    int age = 12;
    std::string nationality;
};

void function(students student);

int main() {

    //to make a access to it
    //first make a variable for all of these

    students muaz;
    muaz.name = "muaz";
    muaz.age = 12;
    muaz.gpa = 5;
    muaz.exrolled = true;

    std::cout << muaz.name << "\n"; //muaz
    std::cout << muaz.age << "\n"; //12
    std::cout << muaz.gpa << "\n"; //5
    std::cout << muaz.exrolled << "\n";//true

    //like that 
    
    //actually we can make a default value of somthing
    structs zafar;
    zafar.name = "zafar";
    zafar.nationality = "niggeria";

    std::cout << zafar.name << "\n";//zafar
    std::cout << zafar.age << "\n";//12
    std::cout << zafar.nationality << "\n";//niggeria

    //it comes out 12 at age even though we didn't set it but we did 12 at default

    //and to pass to a function
    function(muaz);
    //just like that


    return 0;
}
//making function

//               \/ we should put the name of the structer
void function(students student){
    std::cout << student.name << '\n';
}