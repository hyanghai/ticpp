//: c03:argsToInts.cpp
// Converting command-line arguments to ints
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
    for(int i = 1; i < argc; i++)
        cout << atoi(argv[i]) << endl;
    return 0;
}
