//: C03:OnTheFly.cpp
// On-the-fly variable definitions
#include <iostream>
#include <limits>
using namespace std;
int main()
{
    char c;
    while(1)
    {
        cout << "pls. type a char: ";
        c = cin.get();

        if(c == '\n')
            continue;

        cin.get();
        if(c == 'q')
            break;

        cout << c << " typed." << endl;
    }
    return 0;
}
