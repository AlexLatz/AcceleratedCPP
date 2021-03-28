# Chapter 6

- Many container operations work regardless of type
  - The string class also supports some (bc its somewhat of a list)
- Copying elements from container to container
  - copy(iterator begin, iterator end, iterator\_adaptor insertfrom)
  - copies elements between two iterators and inserts starting at insertfrom
  - Iterator adaptors are functions that yield iterators with special properties
    - The most common is back\_inserter(ret), which appends elements to ret
