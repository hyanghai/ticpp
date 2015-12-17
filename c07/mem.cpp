//: c07:mem.cpp
#include "mem.h"
#include <cstring>
using namespace std;

Mem::Mem() { mem = 0; size = 0; }

Mem::Mem(int sz)
{
    mem = 0;
    size = 0;
    ensureMinSize(sz);
}

Mem::~Mem() { delete[] mem; }

void Mem::ensureMinSize(int minSize)
{
    if(size < minSize)
    {
	byte* newmem = new byte[minSize];
	memset(newmem + size, 0, minSize - size);
	memcpy(newmem, mem, size);
	delete[] mem;
	mem = newmem;
	size = minSize;
    }
}

int Mem::msize() { return size; }

byte* Mem::pointer() { return mem; }

byte* Mem::pointer(int minSize)
{
    ensureMinSize(minSize);
    return mem;
}
