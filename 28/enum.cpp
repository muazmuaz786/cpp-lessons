#include <iostream>

// ✅ 1️⃣ What is an `enum`?
// `enum` (short for "enumeration") is a user-defined data type that assigns names to a set of integer constants.
// This makes the code **more readable** and prevents the use of "magic numbers."
// Syntax: 
// enum EnumName { Value1, Value2, Value3, ... };
enum TrafficLight { Red, Yellow, Green };

int main() {
    // ❌ 2️⃣ What happens if we try to use a string in a switch statement?
    // The following code will cause an ERROR because `switch` only works with `int`, `char`, and `enum`, but NOT `std::string`.
    /*
    std::string light = "Green"; 

    switch (light) { // ❌ ERROR: switch statement does not accept strings!
        case "Red":
            std::cout << "Stop!\n";
            break;
        case "Yellow":
            std::cout << "Slow down!\n";
            break;
        case "Green":
            std::cout << "Go!\n";
            break;
    }
    */

    // ✅ 3️⃣ Correct way: Using `enum` in a `switch` statement
    // Here, we use an `enum` variable instead of a string.
    TrafficLight light = Green; // Assigning an `enum` value

    switch (light) { // ✅ `switch` works because `light` is an `enum`
        case Red:
            std::cout << "Stop!\n";
            break;
        case Yellow:
            std::cout << "Slow down!\n";
            break;
        case Green:
            std::cout << "Go!\n";
            break;
    }

    return 0;
}
