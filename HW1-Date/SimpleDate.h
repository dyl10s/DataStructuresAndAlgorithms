//
// Created by dylan on 8/29/18.
//

#ifndef HW1_SIMPLEDATE_H
#define HW1_SIMPLEDATE_H


class SimpleDate {
public:

    static const int MIN_YEAR = 1753;
    SimpleDate(int month, int day, int year);

    int getMonth() const;
    int getDay() const;
    int getYear() const;

    int compareTo(SimpleDate other) const;

    int dayOfWeek() const;
    int daysInYear(int years) const;

    SimpleDate daysFromNow(int n) const;

    bool isLeapYear() const;
    const bool isLeapYear(int year) const;
    int ordinalDate() const;
    const bool isValidDate(int month, int day, int year) const;
    const int daysInMonth(int month, int year) const;
    SimpleDate nextDate() const;

private:
    static const int NUM_MONTHS = 12;
    static const int DAYS_IN_MONTH[];
    static const int DAYS_THUS_FAR[];
    int month;
    int day;
    int year;
};


#endif //HW1_SIMPLEDATE_H
