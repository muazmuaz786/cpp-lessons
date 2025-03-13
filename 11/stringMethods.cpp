#include <iostream>

int main() {
    
    //there is some usefull String Methods in CPP

    std::string name;

    std::cout << "enter your name: \n";
    std::getline(std::cin, name);

    

    // .length() method shows the length of the text (hello => 5)
    std::cout << name.length() << std::endl; 

    

    // The .empty() is used to check whether a container (like a string) is empty or not.
    if (name.empty()){
        std::cout << "its empty" << std::endl;
    }



    //.clear() is used to clear some conatiner(string etc)
    name.clear();
    //now the name is empty



    //.append("string") is used to add somthing to the end of a string
    name.append("@gmail.com");



    //.at(index) is used to see in which index what letter is there
    name.at(0);
    //this sees the first letter of the name



    //.insert(index, "string") adds somthing in the wanted index
    name.insert(0, "@");
    //          /\  /\  add @
    //           at zero index (first)



    //.find("the thing we need to find") searchs an particuler string of an text and returns the index of it
    name.find(" ");
    //here searchs a Space then returns a index of it



    //.erase(from which index, until which index) erases a particular index in a text
    name.erase(0, 3);
    //this erases first 4 letters



    return 0;
}