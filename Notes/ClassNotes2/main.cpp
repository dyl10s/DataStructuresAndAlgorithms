#include <iostream>
#include "MyClass.h"

int main() {

    MyClass abc; //This object is on the stack
    MyClass *abcPoint; //This pointer is on the stack

    *abcPoint = new MyClass(); //the object is on the heap. Pointer stays on the stack.

    return 0;
}