//
// Created by dylan on 9/5/18.
//

#include <iostream>
#include "SimpleDate.h"

SimpleDate::SimpleDate(int day, int month, int year) {


}

//This is the destructor you never make a call to this function
SimpleDate::~SimpleDate() {
    //Do clean up code here or anything you want
    std::cout << "Object destructed";
}
