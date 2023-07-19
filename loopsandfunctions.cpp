#include <iostream>
#include <string>
using namespace std;

// Function that multiplies two numbers and returns the result
int multiply(int num1, int num2) {
    return num1 * num2;
}

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function that splits a string into two strings and returns both
pair<string, string> splitString(const string& input) {
    int length = input.length();
    int mid = length / 2;
    string firstHalf = input.substr(0, mid);
    string secondHalf = input.substr(mid);
    return make_pair(firstHalf, secondHalf);
}

// Function to test pass-by-value or pass-by-reference
void testPassByValue(int value) {
    value = 10;
    cout << "Inside passByValue function: " << value << endl;
}

void testPassByReference(int& value) {
    value = 10;
    cout << "Inside passByReference function: " << value << endl;
}

int main() {
    // Loops: while, do-while, for, foreach (C++11 range-based for loop)
    int i = 1;
    while (i <= 5) {
        cout << "While loop: " << i << endl;
        i++;
    }

    int j = 1;
    do {
        cout << "Do-while loop: " << j << endl;
        j++;
    } while (j <= 5);

    for (int k = 1; k <= 5; k++) {
        cout << "For loop: " << k << endl;
    }

    string names[] = { "Alice", "Bob", "Charlie" };
    for (const string& name : names) {
        cout << "Foreach loop: " << name << endl;
    }

    // Function calls and saving results
    int result = multiply(5, 3);
    cout << "Multiplication result: " << result << endl;

    int factorialResult = factorial(5);
    cout << "Factorial result: " << factorialResult << endl;

    string input = "Hello, World!";
    pair<string, string> splitResult = splitString(input);
    cout << "First half: " << splitResult.first << endl;
    cout << "Second half: " << splitResult.second << endl;

    int value = 5;
    testPassByValue(value);
    cout << "Pass-by-value: " << value << endl;

    int referenceValue = 5;
    testPassByReference(referenceValue);
    cout << "Pass-by-reference: " << referenceValue << endl;

    return 0;
}

