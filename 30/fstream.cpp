#include <iostream>
#include <fstream> //The fstream library allows us to work with files.

int main() {

    //ofstream	Creates and writes to files
    //ifstream	Reads from files
    
    std::ofstream MyFile("text.txt"); //make a file named text.txt and store it at variable MyFile

    MyFile << "sardor good boy";  // write sardor good boy in MyFile variable
    MyFile << "zafar good boy";

    MyFile.close(); //close the file ***important**
    
    std::string sardor;

    std::ifstream MyReadFile("text.txt"); //makes a variable named MyReadFile and it stores content in text.txt

    while(std::getline(MyReadFile, sardor)){ //loops through all lines
        //                            /\ where to store
        //               /\ which one
        std::cout << sardor;
    }

    std::getline(MyReadFile, sardor);//this reads only one line,
    std::cout << sardor; //but while (std::getline(MyReadFile, sardor)); loops through all lines until EOF.

    MyFile.close(); //close the file ***important**

    return 0;
}