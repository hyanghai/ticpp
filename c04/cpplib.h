//: c04:cpplib.h
// C-like library converted to C++
#ifndef CPPLIB_H
#define CPPLIB_H
struct Stash
{
    int size;               // Size of each space
    int quantity;           // Number of storage spaces
    int next;               // Next empty space
    unsigned char* storage; // Dynamically allocated array for bytes:
    // Functions:
    void initialize(int size);
    int add(const void* element);
    void cleanup();
    void* fetch(int index);
    int count();
    void inflate(int increase);
};
#endif // CPPLIB_H
