#include <iostream>
 
using namespace std;

//you should add [] to make it a array
void func(string cars[]){
    cout << cars[1] << "\n";    
}

int main() {

    //Arrays are used to store multiple values in a single variable,
    //instead of declaring separate variables for each value.
    //[value1, value2, value3]

     
    //To declare an array,
    //define the variable type, specify the name of the array followed by square brackets
    //and specify the number of elements it should store:
    
    string cars_ex[4]; //declaring

    //To insert values to it, we can use an array literal
    //place the values in a comma-separated list, inside curly braces:
    string cars[] = {"Volvo", "BMW", "Ford", "Mazda"}; //declaring + initialization

    //To create an array of three integers, you could write:
    int myNum[3] = {10, 20, 30};
    cout << myNum[1] << '\n'; // 20

    //You access an array element by referring to the index number inside square brackets [].
    cout << cars[0] << "\n"; // Outputs Volvo

    //To change the value of a specific element, refer to the index number:
    cars[0] = "Opel";


    //example:
    cars[0] = "Opel";
    cout << cars[0] << '\n';
    // Now outputs Opel instead of Volvo


    //to pass a array to a function:
    //you can just write the name of array to parameter
    func(cars);


    return 0;
}