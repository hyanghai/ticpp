//: c03:assert.cpp
// Use of the assert() debugging macro
#define NDEBUG
#include <cassert>
using namespace std;

int main()
{
    int i = 100;
    assert(i != 100);
    return 0;
}
