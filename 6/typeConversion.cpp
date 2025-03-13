#include <iostream>


int main(){

    using namespace std;

    //type conversion is making one type to other

    //for example

    double num = 3.14;
    
    cout << num << endl;

    //if we just print this it will come out just 3.14
    // but if we change the type:

    cout << (int) num;

    //because "int" can only store whole numbers so it will come out just 3

    int a = 5.9;  // 5.9 → 5 (auto)
    double b = 10; // 10 → 10.0 (auto)
}