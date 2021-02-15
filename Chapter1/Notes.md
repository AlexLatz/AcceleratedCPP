# Chapter 1

- std::cin >> variable can take input from stdin and push to a variable
    - input buffer is flushed on cin
    - the input buffer stores output until needed (the system takes significant amounts of time to write output regardless of size)
        - The buffer will be flushed when it's full, when it needs input, and when the user wants it to
        - std::endl flushes the buffer
    - \>\> operator discards whitespace from the input and reads characters to variable until whitespace
        - This means it only grabs one word from input
- String type in C++: std::string
    - default initializer is ""
    - \+ can be used to concatenate two strings or a string and a string literal
    - .size() returns size of string (int)
    - strings can be constructed from a int, char combo
        - produces a string of chars of length int
        - std::string stars(10,'*');
- Inline declaration and initialization (same as Java)
- const instead of final: initialized immediately