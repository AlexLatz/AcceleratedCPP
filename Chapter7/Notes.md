# Chapter 7

- Associative containers - containers that don't maintain a sequence
  - Maps in C++ - use a key to index an element
  - ex. `map<type, type>` lets you index into the map like `map[key]`
  - When maps are indexed with new keys, an element is automatically created
    - starts with the default value
- Pairs - essential for pulling the key and value out of a map
  - A pair holds a key and value, but map pairs have const keys
  - pair.first and pair.second for getting the values
  - Remember to add spaces between angle brackets in declarations
- Default arguments - can imply a default value, allowing user to skip parameters
  - ex. `void test(int i = 5)`
