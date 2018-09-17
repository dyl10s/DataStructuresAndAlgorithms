//
// Created by dylan on 9/10/18.
//

#include "MyClass.h"

void MyClass::sample(int a, MyClass b, int& c) { //a and b are passed by value. c is passed by reference

    if(a > 5) {
        a = a * 2;
        c++; //This will edit the reference passed
    }

}