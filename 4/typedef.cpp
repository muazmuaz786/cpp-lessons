#include <iostream>

//typedef is a tool that allows us to create shorter names for longer data types.

//typedef {data type} {name}; 

typedef std::string text_t;
//(we usually put _t after the word to make it more readable)  


//This allows us to use text_t instead of std::string, making the code shorter and more readable.

int main(){

    using std::cout;
    using std::endl;

    //* we can make like that using "using" so we can make it more smaller

    text_t text = "this is a text made by typedef";

    cout << text << endl;

    //it will come out "this is a text made by typedef"


    return 0;
}

//and we can make typedef using "using":


using str = std::string;