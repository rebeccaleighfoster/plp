# Discussion Questions

1. What are the naming requirements for variables in C++?
   - In C++, variables must start with a letter or an underscore and can contain letters, digits, and underscores. Camel case (e.g., lastName) or underscore-separated (e.g., last_name) naming styles are commonly used.

2. Is C++ a statically or dynamically typed language?
   - C++ is a statically typed language, which means that variable types are determined at compile-time and cannot change during runtime.

3. Is C++ strongly typed or weakly typed?
   - C++ is considered a strongly typed language. It enforces strict type checking and does not automatically perform implicit type conversions between different data types. Explicit type casting is required for conversions.

4. If you put this line (or something similar) in a C++ program and try to print x, what does it do? If it doesn't compile, why? Is there something you can do to make it compile? x = "5" + 6;
- This line of code would not compile in C++ because it is attempting to concatenate a string ("5") with an integer (6) using the `+` operator, which is not supported. To make it compile, you can convert the integer to a string or vice versa before concatenation. For example, you can use the `std::to_string` function to convert the integer to a string.

5. Describe the limitations (or lack thereof) of C++ as they relate to the coding portion of the assignment (adding ints and floats, storing different types in lists, converting between data types). Are there other restrictions or pitfalls that the documentation mentions that you need to be aware of?
- In C++, you can perform various operations between different data types, such as adding ints and floats. The result of adding an int and a float will depend on the context: if assigning to a float variable, it will perform a widening conversion and result in a float; if assigning to an int variable, it will perform a narrowing conversion and result in an int. You can store different data types in containers like arrays or vectors. C++ provides explicit type casting mechanisms (e.g., `static_cast`) for converting between data types.

6. Are there built-in complex data types that are commonly used in C++? (hint: they'd probably appear fairly early in the documentation if so)
- Yes, C++ provides built-in complex data types such as `std::vector` (dynamic array), `std::map` (dictionary/map), `std::set` (set), and `std::queue` (queue), which are commonly used for various purposes.

