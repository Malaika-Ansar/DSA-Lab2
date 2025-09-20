#include <iostream>
using namespace std;

void analyze_pointer(int* ptr) {
    // memory location pointed to by the pointer
    cout << "Memory location pointed by ptr: " << ptr << endl;

    //  value at the memory location
    cout << "Value at memory location: " << *ptr << endl;
}

int main() {
    int x = 42;
    int* ptr = &x;  // Pointer to x

    // Call pointer
    analyze_pointer(ptr);

    return 0;
}
