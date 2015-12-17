//: c04:sizeof.cpp
// Sizes of structs
#include "clib.h"
#include "cpplib.h"
#include <iostream>
using namespace std;
#define PRN_SIZEOF(S) \
        cout << "sizeof struct " #S " = " << sizeof(S) \
             << " bytes" << endl;
struct A
{
    int i[100];
};

struct B {
    void f();
};
void B::f() {}


int main()
{
    PRN_SIZEOF(A);
    PRN_SIZEOF(B);
    PRN_SIZEOF(CStash);
    PRN_SIZEOF(Stash);
    PRN_SIZEOF(int);
    return 0;
}

