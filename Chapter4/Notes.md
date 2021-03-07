# Chapter 4

- C++ uses call-by-value for function parameters
    - ex. expressions passed in are evaluated and copied before being passed
    - Passing in a vector will create a full copy of the vector
- Throwing exceptions - `throw name_error("message");`
- Calling by reference - the & sign `vector<int>& hw1 = hw;`
    - Adding a & after the type brings it as a reference
    - A const and then & means a read-only reference
- Returning multiple values from a function - put values in outside referenced collection
    - returning `istream&` allows for if(function(cout, list)) to check success or failure
    - istream.clear() removes errors, allows for continued function
- Nonconst reference values must be lvalues - nontemporary objects
    - lvalues are assigned to a variable (won't be discarded thru scope)
    - Can't pass temporary values into a function - error at runtime
- Avoid passing functions into cout - process ahead of time
- try-catch: same as java but with the type of error as the catch
- structs: a class without functions
    - ex. (semicolon after closing bracket is required)
    ```cpp
    struct Student_info {
        std::string name;
        double midterm, final;
        std::vector<double> homework;
    };
    ```
    - Can use a vector of structs to store lots of data
- The sort function with structs
    - Requires a predicate, a bool returning function that takes 2 structs
- max function requires the two types to be the same
- Separate compilation - C++ uses header files to allow outside access
    - .h or .hpp, and imported with `#include "test.h"`
    - quotes in the include line copy the contents of the header
    - header functions have function declarations - ; not {}
    - To prevent multiple imports - ifndef, define, endif
        ```cpp
        #ifndef GUARD_var_h
        #define GUARD_var_h
        void test();
        #endif
        ```
        - Defines a variable, then doesn't import if already defined