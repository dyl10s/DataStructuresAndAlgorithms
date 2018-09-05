#include <iostream>
#include "SimpleDate.h"

int main() {
    //New way to create object no need for new keyword use {}
    //d2 has a shorter lifetime and the destructor will be called first.
    SimpleDate d1{9, 5, 2018};

    for(int x = 0; x < 5; x++){
        SimpleDate d2{0, 0, 0};
    }//d2 destructor gets called here

    return 0;

}//d1 destructor gets called here