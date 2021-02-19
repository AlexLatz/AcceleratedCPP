# Chapter 4

- C++ uses call-by-value for function parameters
    - ex. expressions passed in are evaluated before being passed
    - Passing in a vector will create a full copy of the vector
- Throwing exceptions - `throw name_error("message");`
- Calling by reference - the & sign `vector<int>& hw1 = hw;`
    - Adding a & after the type brings it as a reference
    - A const and then & means a read-only reference
- Returning multiple values from a function - return inputstream ref
    - istream.clear() removes errors, allows for continued function
- Nonconst reference values must be lvalues - nontemporary objects
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
