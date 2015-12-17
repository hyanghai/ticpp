//: c03:floatingAsBinary.cpp
//{L} printBinary
//{T} 3.14159
#include "printBinary.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        cout << "Must provide a number" << endl;
        exit(1);
    }
    double d = atof(argv[1]);
    unsigned char* cp = reinterpret_cast<unsigned char*>(&d);
    for(int i = sizeof(double); i-- > 0;)
    {
        printBinary(cp[i]);
        cout << " ";
    }
    return 0;
}
