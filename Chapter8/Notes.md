# Chapter 8

- Generic functions - have unspecified types
  - Implemented through template functions
  - A single definition for a family of functions that behave differently
  - Before the function, declare a generic with template\<class T\>
  - Checks all arithmetic and other operators to make sure the input type is compatible
- The standard library specifies 5 iterator categories
  - Different iterators support different operations based on the container
  - Input iterators - supports increment, equality, and dereferencing
  - Output iterators - increment, setting, and dereferencing
  - Forward iterators - combination of input/output
  - Bidirectional iterators - forwards iterators with decrement
  - Random access iterators - iterator arithmetic and [] access
    - p[n] is the same as \*(p+n)
- Streams and iterators - istream\_iterator and ostream\_iterator
  - Used to represent streams as iterators (can move around)
  - ex. istream\_iterator\<int\>(cin) is an int iterator off of cin
