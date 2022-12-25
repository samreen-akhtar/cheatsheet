BASIC SYNTAX
     #include <iostream>
     using namespace std;
     // main() is where program execution begins.
     int main() {
     // This is where you write your code
     return 0;}
     
OUTPUT
     cout<<
INPUT
     cin>>
COMMENT
     //single line
     /*multi line*/

TOKEN
     A token is the smallest individual element of a program that is understood by a compiler. A token comprises the following:

     Keywords – That contain a special meaning to the compiler
     Identifiers – That hold a unique value/identity 
     Constants – That never change their value throughout the program 
     Strings – That contains the homogenous sequence of data 
     Special Symbols – They have some special meaning and cannot be used for another purpose; eg: [] () {}, ; * = # 
     Operators – Who perform operations on the operand

AUTO KEYWORD
     The auto keyword may be used to declare a variable with a complex type in a straightforward fashion.
     You can use auto to declare a variable if the initialization phrase contains templates, pointers to functions, references to members, etc. 
     With type inference capabilities, we can spend less time having to write out things the compiler already knows.
     As all the types are deduced in the compiler phase only, the time for compilation increases slightly but it does not affect the runtime of the program. 
     
NAMESPACE
     Namespaces enable us to organize named items that would otherwise have global scope into smaller scopes, allowing us to give them namespace scope. 
     This permits program parts to be organized into distinct logical scopes with names. The namespace provides a place to define or declare identifiers 
     such as variables, methods, and classes. 
     
     
VOID KEYWORD
     The void keyword, when used as a function return type, indicates that the function does not return a value. 
     When used as a parameter list for a function, void indicates that the function takes no parameters. 
     Non-Value Returning functions are also known as void functions. They’re called “void” since they’re not designed to return anything. True, but only partially.
     We can’t return values from void functions, but we can certainly return something. 
     Although void functions have no return type, they can return values.
     
     
SWITCH
     A switch statement allows you to test an expression against a variety of cases. 
     If a match is found, the code within begins to run. A case can be ended with the break keyword. When no case matches, default is used.
     
     switch (grade) {
     case 9:
      cout << "Freshman\n";break;
     case 10:
      cout << "Sophomore\n";break;
     case 11:
      cout << "Junior\n";break;
     case 12:
      cout << "Senior\n";break;
     default:
      cout << "Invalid\n";break;}


ARRAYS
     Instead of defining individual variables for each item, arrays are used to hold these values of the same data type in a single variable.
     It stores the values in a contagious block of memory, that’s why we need to specify the number of values it is going to hold beforehand.


VECTORS
     A vector in C++ is a dynamic list of things that can expand and shrink in size. It can only hold values of the same type. 
     It is important to #include the vector library in order to use vectors.
     
     push_back() function adds the value at the end of the vector.
     pop_back() function removes the element from the end of the vector.
     size() returns the size of the vector.


FUNCTIONS
     When a function is called, it is a collection of statements that are all executed at the same time. 
     Every function has a name that is used to refer to it when it is called. A function typically contains the following parts:

     Return value: Return value is the value that the function return at the end of the function. 
                    A function must return the value of the same data type as mentioned in the function declaration.
     Parameters: The parameters are the placeholders of the values passed on to them. In the above code, a and b are the function parameters.
     Declaration: It contains the name of the function, its return type, and parameter list.
     
     Defining a Function
     The following is the syntax for defining a function in C++:

                         return_type function_name( parameter list ) {
                         body of the function
                             }
     Where:

     return_type specifies the type of value being returned by that function. 
     function_name specifies the name of the function and needs to be unique. 
     parameter list allows you to pass more than one value to your function, along with their data types. 
     body of the function specifies the set of instructions to accomplish a task. 

FUCTION ARGUMENTS
     You can pass arguments in three ways:

     Call by value: Passes the actual value of an argument into the formal parameter of the function. 
                    It will not make any change to the parameter inside the function and does not effect on the argument.
     Call by pointer: You can copy an argument address into the formal parameter. 
                    Here, the address accesses the actual argument used in the call. This means that changes made to the parameter affect the argument.
     Call by reference: You can copy an argument reference into the formal parameter.
                    The reference accesses the actual argument used in the call. This means that changes made to the parameter affect the argument.



CLASS
     class City {
         // Attribute
     string name;
     int population;
     public:
        // Method
     void increase_population() {
         population++;
        }  };
        
        In C++, a class is the fundamental building block of Object-Oriented programming. A class typically consists of:

              Attributes, often called member data, are data about a specific instance of a class.
              Member functions, often known as methods, are functions that are present in the class.

OBJECT
      City Mumbai;
       An object is an instance of a class that encapsulates its data and member functions. The above code creates an instance of the class City named Mumbai.


FUNCTION OVERLOADING
     Functional Overloading is a property where two or more functions can share the name but not the same list of arguments.
     It is basically defining a function in numerous ways such that there are many ways to call it or in simple terms you have multiple versions of the same function.
     Parameterized Functions are a good example of Function Overloading as just by changing the argument or parameter of a function you make it useful for different purposes.
     
     Example of Function Overloading:

     int GFG(int X, int Y);
     int GFG(char X, char Y);
     
     Upon a keen observation, the name remains the same whereas the order, data type, and entire list of arguments change. 
     There are certain rules to be followed while overloading a function in C++. Let us have a look at some of them:

          The functions must have the same name
          The functions must have different types of parameters. 
          The functions must have a different set of parameters.
          The functions must have a different sequence of parameters. 
     
     
OPERATOR OVERLOADING
     It is basically giving practice of giving a special meaning to the existing meaning of an operator or in simple terms redefining the pre-redefined meaning.
     Polymorphism is a good example of an operator overloading as an object of allocations class can be used and called by different classes for different purposes.

     Example of Operator Overloading:

     int GFG() = X() + Y();
     int GFG() = X() – Y();
     
     
FILE HANDLING
      File handling refers to reading and writing data in files. C++ provides us with functions that allow us to do so. 
      
      You can use an fstream library to handle files. The fstream library consists of <iostream> and <fstream> header file. 

     #include <iostream>
     #include <fstream>

     ofstream: create and write to the files.
     ifstream: read from the specified file.
     fstream: combination of above both.

     FOR CREATING & WRITING
      int main() {
          // Create and open a text file
      ofstream MyFile("filename.txt");
          // Write to the file
      MyFile << "File Handling in C++";
          // Close the file
      MyFile.close();
      }
     The above code creates a file and writes text in it.

          getline();
    The above function allows us to read the file line by line.

          void open(const char* file_name,ios::openmode mode);
    The above function opens a file.
    
    FOR READING 
     // text string to output the text file
     string myText;
     // Read from the text file
     ifstream MyReadFile("filename.txt");
     // for reading the file line by line
     while (getline (MyReadFile, myText)) {
     // Output the text from the file
     cout << myText;
     }
     // Close the file
     MyReadFile.close();

EXCEPTION HANDLING
     An exception is an unusual condition that results in an interruption in the flow of the program. While compiling and running, you might run into errors.
     C++ allows you to handle and catch these errors using exception handling.
     try {
     // code to try
     throw exception; // If a problem arises, then throw an exception
     }
     catch () {
     // Block of code to handle errors
     }
     
