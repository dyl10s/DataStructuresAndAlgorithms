#include <iostream>
#include <memory>
#include "Sample.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    //This creates and initializes a pointer and there is no need to delete
    unique_ptr<Sample> s1 = make_unique<Sample>();
    shared_ptr<Sample> s2 = make_shared<Sample>();

    return 0;
}