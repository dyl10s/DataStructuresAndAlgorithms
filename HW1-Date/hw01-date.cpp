#include <iostream>
#include "SimpleDate.h"

int main() {
    SimpleDate *date = new SimpleDate(5, 8, 2011);
    std::cout << date->nextDate().getMonth() << "\\" << date->nextDate().getDay() << "\\" << date->nextDate().getYear();
    return 0;
}