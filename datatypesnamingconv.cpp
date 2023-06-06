#include <iostream>
#include <string>
#include <vector>
#include <map>

int main() {
    // int
    int myInt = 42;

    // string
    std::string myString = "Hello, World!";

    // floating-point number
    float myFloat = 3.14;
    double myDouble = 3.14159265359;

    // boolean
    bool myBool = true;

    // array/list
    int myArray[] = {1, 2, 3, 4, 5};
    std::vector<int> myList = {1, 2, 3, 4, 5};

    // dictionary/map
    std::map<std::string, int> myMap;
    myMap["apple"] = 10;
    myMap["orange"] = 5;

    // Operations between data types
    float result1 = myInt + myFloat; // Adding int and float, result is float (widening conversion)
    int result2 = myInt + static_cast<int>(myFloat); // Adding int and float, result is int (narrowing conversion)
    
    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;

    // Putting different data types in the same array or list
    std::vector<int> mixedList = {myInt, static_cast<int>(myFloat), myBool};

    // Converting between data types
    float convertedFloat = static_cast<float>(myInt);
    int convertedInt = static_cast<int>(myFloat);

    return 0;
}
