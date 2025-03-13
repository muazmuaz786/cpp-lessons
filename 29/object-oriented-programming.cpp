#include <iostream>

// ✅ 1️⃣ What is a `class`?
// A `class` is a blueprint for creating objects.
// It defines attributes (variables) and behaviors (functions) that the objects will have.
// Syntax:
// class ClassName {
//    public:
//        (attributes and methods)
// };

// Example: A class representing a Car
class car{
    public:
        // ✅ Attributes (also called "member variables")
        std::string brand;
        std::string model;
        std::string color;
        int year;

        // ✅  Method (a function inside a class)
        // Methods define behaviors of the object.
        void accelerate(){
            std::cout << "You step on the gas\n";
        }
        void brake(){
            std::cout << "You step on the brakes\n";
        }


    // ✅ Constructor (special function to initialize an object)
    // A constructor is a function that runs when an object is created.
    car(std::string carBrand, std::string carModel, int carYear, std::string color) {
        brand = carBrand;
        model = carModel;
        year = carYear;
        //if the parameter name and the method name same we should put "this ->" in the beggining
        this -> color = color;
    }

    //and actually we can make diffrent Constructor for diffrent intializing if there is diffrent parameter
    car(std::string carBrand, std::string carModel, int carYear, std::string color, std::string text){
        brand = carBrand;
        model = carModel;
        year = carYear;
        this -> color = color;
        std::cout << text << '\n';
    }

    //private is a place that user cannot enter and change somthing
    //if we have any unneccesary variable in public it will be cahngable but if it will be at private it cannot be cahnged from outside
    private:
        //this variable cannot be accesed from outside
        int tempreture = 0;

    //and we can access a private just inside the class
    //and we need to make setter,getter,constructer inside public
};








class Stove{
    public:

    //getter and setter:

    //getter is an getting somthing
    //setter is setting somthing


    Stove(int tempreture){
        setTemp(tempreture);
    }

    //setter
    void setTemp(int temp) {
        if (temp >= 0 && temp <= 500) {
            this->tempreture = temp;
        } else {
            std::cout << "Error: Invalid temperature!\n";
        }
    }

    //getter
    int getTemp(){
        return tempreture;
    }
    
    private:
        int tempreture = 0;

    //and we can access a private just inside the class
    //and we need to make setter,getter,constructer inside public
};



//this will be the parantes which it will inhereta all of his functionality
class Animal{

    public:
        bool alive = true;
    void eat(){
        std::cout << "animal is eating!\n";
    }

};

//to make an class to be inhereted:
class Cat : public Animal {
    public:

    void meow(){
        std::cout << "meow meow\n";
    }
};




int main() {

    //to create an object:
//   class name
//   \/    \/ name
    car car1; // **dont think about the error**
    //the error came out cause we used just the normall way even though we have constructer

    //to assign the values on the Attributes
    car1.brand = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "silver";

    //to use the methods
    car1.accelerate();
    car1.brake();

    //but if we have Constructor that is a function that intializing the object
    car car2("benz", "S-class 600", 2025, "black");
    //we don't need to do any other steps that we did last time,
    //the constructer does for us


    //we can use a other constructer also like that
    car mustang = car("Ford", "mustang", 2025, "black", "mustang is a good car");








    //getter and setter:
    Stove stove(100); //setting
    std::cout << stove.getTemp(); //getting



    Cat cat;
    //even though we didn't put the eat function to Cat but we can use it because we inherated it from its parants(Animal)
    cat.eat();

    
    return 0;
}