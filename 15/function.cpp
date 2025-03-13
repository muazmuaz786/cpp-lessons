#include <iostream>
#include <cmath>

//function is just an reusable piece of code.
//to make a function you can just do
/*

{data type you are returning} {unique name}({data type} {variable}){

    code ---

}

like that it is but if you are not returning anything you can just put the data type of the function as "void"

*/


//examples


//here we put the data type as "void" since we are not returning any thing
//and we put the parameter "name" and the data type of it as "std::string" because its a string
void happyBirthday(std::string name){
    std::cout << "happy birthday " << name << std::endl;
}

//here we put the data type as double since we are returning a double(a number with a decimal)
//and we put the parameter "num" and the data type of it as "double" because its a number containing a decimal 
double square(double num){
    return num * num;
}

// and more etc.

//and puting a parameter is not nessesary



//and we can make a function with the same name but with other parameter and these functions will work diffrently
//this works because the function name + parameter is the functions signature so if there is diffrent parameter it will work like its diffrent function
void happyBirthday(std::string name, int age){
    std::cout << "happy birthday " << name << " you are now "  << age << "years old" << std::endl;
}



//and just writing the every functions up is little nasty
//but if we write all of the functions down it will not work because the computer reads from top to down
//the easist method is make a function declaration up and write the function down 
//until now we were writing all of the function up and we did declaration + initialization all the time
//so now we will do seperatly 

//declaration (setting it)
void print(std::string text);
//go to the end and see the initialization


int main() {
    
    //to call the function:
    //{name of the function}({variable})
    happyBirthday("zafar"); //happy birthday zafar
    happyBirthday("sardor", 0);//happy birthday sardor you are now 0 years old
    //this works because it has same name but it has diffrent parameters.


    //you can assign a function's return value to a variable.
    //but only if the function actually returns  something (int, double, std::string, etc.).
    //If a function has void as its return type, you CANNOT assign it to a variable.
    double squareNumber = square(5.0); //25

    
    //and every time we must not to pass the data type when we are passing the variable to function
    //but we should just write the data type when we are doing declaration and initialization


    print("we did declaration and initialization seperatly in this function");


    return 0;
}


//initialization
void print(std::string text){
    std::cout << text << '\n';
}