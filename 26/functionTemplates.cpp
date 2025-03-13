#include <iostream>

//we can just make one template named "T"
template <typename T>

T max_all(T x, T y){
    return (x > y) ? x : y;
}
//T says like we are just setting and we dont know what it will be
//and the computer it self calculate the T by the inputs and matches
//it will with any kind of inputs: char, int, double all

//but if it has a diffrent data type
//we can just make one more template and do, but it will be complicated
//so we can just make a new template for input but we can do "auto" data type for returning

template <typename T, typename U>
//\/ like that we can add auto to make return also automatic
auto max_all2(T x, U y){

}




int max_int(int x, int y);
double max_double(double x, double y);

int main() {
    
    int x = 2;
    int y = 1;

    double z = 2.2;
    double j = 1.6;

    //function templates = describes what a function looks like.
    //                     Can be used to generate as many overloaded functions
    //                     as needed, each using diffrent data types

    //if we want to make a function that if we pass in two things it will return what is bigger
    //we should make a lots of functions that returns many data types

    max_int(x, y);
    max_double(z, j);


    //but this is a lot of work that creating two over loaded functions that each do the same thing
    //the only diffrences is that it accecpts and returns a diffrent data type

    //to don't work with these we can just make a function template and make it to work with a lots of things (goto up to see)

    return 0;
}

int max_int(int x, int y){
    return (x > y) ? x : y;
}

double max_double(double x, double y){
    return (x > y) ? x : y;
}