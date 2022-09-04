### **First Program Explanation Line by line**

1. `#include` is the pre processor directive
   By pre processor directive we mean that this is executed first before anything else in the program occurs
   What include does is that it includes the file we specified in the program, so that its functions can be directly used later on in the main program

2. `<iostream>` is the file that we have to include for performing i/o or input/output
   so this is necessary to take input from user & produce output to the screen
   If we don't include this we get an error because program doesn't know what cin & cout are, and will become incapable of handling i/o

3. `using namespace std;`
   std is the namespace where we have pre-written definitions and declaration of stuff
   So in other words it's like a dictionary for the program so that it can understand the default names
   `using` is to make sure that the whole program follows the standard std;
   alternatively if we don't want to write the whole statement we can write `std::` before every function
   we can also create our own custom namespace if we want to

4. `int main()`
   int is a data type and main is a function
   main() function is like the top manager of a C++ program & it is where the execution of the program starts
   without main a function won't even run
   Note : You can not name main something else like "major","important",etc. main must be called main only

5. `cout<<` is used to print the output to the screen
   `cin>>` is for taking input from the user via keyboard

6. `"Hello Code in 10 Fam"` is a string
   a string is used for writing a sentence or line of characters

7. `;` is used at the end of all statements in C++, except for certain things like including pre-processor, etc.

8. `return 0;` returns at the end of the program
   in newer versions of C++ compilers it is mostly optional

9. `{}` define the scope of the functions/classes,etc. used