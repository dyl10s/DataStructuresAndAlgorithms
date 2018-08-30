//
// Created by dylan on 8/29/18.
//

#ifndef HW1_SIMPLEDATE_H
#define HW1_SIMPLEDATE_H


class SimpleDate {
public:

    static const int MIN_YEAR = 1753;
    SimpleDate(int month, int day, int year);

    int getMonth();
    int getDay();
    int getYear();

    int compareTo(SimpleDate other);

    int dayOfWeek();
    int daysInYear(int years);

    SimpleDate daysFromNow(int n);

    bool isLeapYear();
    const bool isLeapYear(int year);
    int ordinalDate();
    const bool isValidDate(int month, int day, int year);
    const int daysInMonth(int month, int year);
    SimpleDate nextDate();

private:
    static const int NUM_MONTHS = 12;
    static const int DAYS_IN_MONTH[];
    static const int DAYS_THUS_FAR[];
    int month;
    int day;
    int year;
};


#endif //HW1_SIMPLEDATE_H
