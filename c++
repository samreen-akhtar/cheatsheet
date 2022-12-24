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
     
