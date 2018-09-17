#include <iostream>
#include <memory>
#include "MyClass.h"

using namespace std;

int main() {

    MyClass abc; //This object is on the stack
    MyClass *abcPoint; //This pointer is on the stack

    abcPoint = new MyClass(); //the object is on the heap. Pointer stays on the stack.

    unique_ptr<MyClass> smartUniquePointer; //This is a smart pointer and it will auto delete. It has to be unique!
    shared_ptr<MyClass> smartSharedPointer; //This is a smart pointer and it will auto delete. It does not have to be unique!

    delete abcPoint; //Delete raw pointers!

    return 0;
}