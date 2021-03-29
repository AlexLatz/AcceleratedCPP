# Chapter 6

- Many container operations work regardless of type
  - The string class also supports some (bc its somewhat of a list)
- Copying elements from container to container
  - copy(iterator begin, iterator end, iterator\_adaptor insertfrom)
  - copies elements between two iterators and inserts starting at insertfrom
  - Iterator adaptors are functions that yield iterators with special properties
    - The most common is back\_inserter(ret), which appends elements to ret
- find\_if(iterator begin, iterator end, boolfxn condition)
  - returns an iterator of the first occurance where the condition is true
- find\_if doesn't work well with overloaded fxns, so a wrapper may be necessary
- string constructor (iterator begin, iterator end) makes string from iterators
- equals(iterator begin, iterator end, iterator reverseother)
  - returns a bool if the range [begin, end) is equal to reverse + end elements
- find(iterator begin, iterator end, element e) - finds occurance of e
- static elements - a storage class specifier
  - static elements are preserved across function calls, only initialized once
