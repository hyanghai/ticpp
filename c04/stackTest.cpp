//: c04:stackTest.cpp
//{L} Stack
//{T} stackTest.cpp
// Test of nested linked list
#include "stack.h"
#include "../require.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    requireArgs(argc, 1);
    ifstream in(argv[1]);
    assure(in, argv[1]);
    Stack textlines;
    textlines.initialize();
    string line;
    // Read file and store lines in the Stack:
    while(getline(in, line))
        textlines.push(new string(line));
    // Pop the lines from the Stack and print them:
    string* ps;
    while((ps = (string*)textlines.pop()) != 0)
    {
        cout << *ps << endl;
        delete ps;
    }
    textlines.cleanup();
    return 0;
}
