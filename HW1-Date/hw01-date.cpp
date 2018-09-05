#include <iostream>
#include "SimpleDate.h"

int main() {

    SimpleDate date{5, 10, 2017};

    std::cout << date.getDay();
    std::cout << date.getMonth();
    std::cout << date.getYear();
    std::cout << date.isLeapYear();
    std::cout << date.isLeapYear(2018);
    std::cout << date.daysInMonth(6, 2012);
    std::cout << date.isValidDate(5, 16, 1999);
    std::cout << date.ordinalDate();
    std::cout << date.daysInYear(2011);
    std::cout << date.dayOfWeek();

    SimpleDate other{1, 2, 1999};
    std::cout << date.compareTo(other);

    date.nextDate();
    date.daysFromNow(10);
    return 0;
}