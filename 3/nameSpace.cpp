#include <iostream>

namespace name {
    int x = 0;
}

int main() {
    // A namespace allows you to create different versions of variables without conflicts.


    int x = 0; // This is a local variable inside main.

    // Even though we have another variable named 'x' inside the namespace,
    // it doesn't conflict because they belong to different scopes.

    // To access the variable inside the namespace, use the scope resolution operator (::).
    
    std::cout << name::x << std::endl;
    //               /\ This means 'from the "name" namespace, access x'.

    // If we don’t specify a namespace (like name::),
    // it will automatically use the variable from the current scope.

    // However, if we want to automatically use variables from a specific namespace,
    // we can add this line:

    using namespace name; 

    // This makes 'name' the default namespace in this scope,
    // so we can use its variables without writing "name::" each time.

    //:: means 'go inside' a namespace or class, but if we are already inside, we don’t need it.
    //It tells the compiler to look inside a specific namespace or class for a function or variable.
    //If we use using namespace, we don't need :: for variables inside that namespace.

    return 0;
}
