//: c04:scoperes.cpp
// Global scope resolution
int a;
void f() {}

struct S
{
    int a;
    void f();
};

void S::f()
{
    ::f(); // Call global f(), would be recursive otherwise!
    ::a++; // Select the global a
    a--;   // The a at struct scope
}

int main() {S s; f();}
