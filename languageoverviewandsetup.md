### How do you run programs in that language?

To run programs written in C++, you need to follow these steps:

1. Write your C++ code in a text editor or an Integrated Development Environment (IDE).
2. Save the file with a `.cpp` extension, indicating it is a C++ source code file.
3. Open a command prompt or terminal and navigate to the directory where your C++ file is saved.
4. Compile the C++ source code using a C++ compiler. For example, if you have GCC installed, you can run `g++ filename.cpp -o output` to compile the code and generate an executable file named `output`.
5. Once the compilation is successful, run the generated executable by typing `./output` (replace `output` with the actual executable name) in the command prompt or terminal.
6. The program will execute, and you will see the output on the console.

### How do you write comments in your language?

In C++, you can write comments to add explanatory or descriptive text that is ignored by the compiler. There are two types of comments:

1. Single-line comments: Use `//` to indicate a single-line comment. Everything after `//` on the same line will be considered a comment.

2. Multi-line comments: Enclose multi-line comments between `/*` and `*/`. Everything between these markers will be treated as a comment, even if it spans multiple lines.

Here's an example:

```cpp
// This is a single-line comment

/*
   This is a multi-line comment.
   It can span multiple lines.
*/

// Code statements below
int x = 5; // This is another single-line comment

