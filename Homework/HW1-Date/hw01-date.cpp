#include <iostream>
#include "SimpleDate.h"

int main() {

    SimpleDate date{5, 10, 2017};

    std::cout << date.getDay() << std::endl;
    std::cout << date.getMonth() << std::endl;
    std::cout << date.getYear() << std::endl;
    std::cout << date.isLeapYear() << std::endl;
    std::cout << date.isLeapYear(2018) << std::endl;
    std::cout << date.daysInMonth(6, 2012) << std::endl;
    std::cout << date.isValidDate(5, 16, 1999) << std::endl;
    std::cout << date.ordinalDate() << std::endl;
    std::cout << date.daysInYear(2011) << std::endl;
    std::cout << date.dayOfWeek() << std::endl;

    SimpleDate other{1, 2, 1999};
    std::cout << date.compareTo(other) << std::endl;

    date.nextDate();
    date.daysFromNow(10);
    return 0;
}