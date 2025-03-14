#include <iostream>


int main(){
    
    //we were using cout for "character output" but now we're gonna use cin for "character input"

    std::string name;

    std::cout << "What's your name?"<< std::endl;
    //shows the text

    //makes an input
    std::cin >> name;
    //    /\      /\ we will save to variable "name"
    //    charactor input

    std::cout << "hello " << name << std::endl;
    // print hello then print name

    //but if we need to input that might contain a Space we will need a getline function

    std::getline(std::cin, name);

    //              /\      /\ where to store
    //               which one


    //but if we make any normal input next to getline function it will new line character will be there automaticlly
    //so to prevent this we can just add these to the getline func:

    std::getline(std::cin >> std::ws , name);

    return 0;
}
