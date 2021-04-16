# Chapter 9

- Defining custom types - the cornerstone of OOP
  - You can add functions to a struct
  - ex. `type name(type param);` in the list of instance variables
  - Accessed through name.fxn() like in Java
  - Later defined in a source file fully - name is Class::fxn when defining
  - When writing this function, assume the scope is inside of the struct
  - To make a function const, add it after the parameter list
  - If the function changes the state, then it should be a member
- Instead of big structs, use classes
  - Classes allow for public/private by saying `public:` then function declarations
  - classes are private by default, while structs are the opposite
- Can access a nameless scope with ::function()
- Constructors by default recursively default their instance variables
  - to make one: `Class(type param);`
  - Constructor intializer lists - lists of varname (startVal)
    - `Class::Class(): var(0), var2(0) {}
    - sets the default value of non-instance variables
  - C++ uses random values from memory when initializing primitives

