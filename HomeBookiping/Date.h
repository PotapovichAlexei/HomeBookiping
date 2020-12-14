#pragma once
//#include <iostream>
//
//using namespace std;
#include "Exception.h"
#include <time.h>
class Date {
public:
    int _day;
    int _month;
    int _year;

public:
    Date() : _day(0), _month(0), _year(0) {};
    Date(int& day, int& month, int& year) : _day(day), _month(month), _year(year) {};
//    friend ostream& operator<<(ostream& out, const Date&);
//    friend istream& operator>>(istream& in, Date& obj);
//
//    bool valid() const;
//
//    int getDay()const { return _day; };
//    int getMonth()const { return _month; }
//    int getYear()const { return _year; }
//    void setDay(const int& day) { _day = day; }
//    void setMonth(const int& month) { _month = month; }
//    void setYear(const int& year) { _year = year; }
//
//    friend bool operator== (const Date&, const Date&); // comparison operators
//    friend bool operator!= (const Date&, const Date&);
//    friend bool operator< (const Date&, const Date&);
//    friend bool operator> (const Date&, const Date&);
//    friend bool operator<= (const Date&, const Date&);
//    friend bool operator>= (const Date&, const Date&);
    friend istream& operator>>(istream& in, Date& obj);
    friend ostream& operator<<(ostream& out, Date& obj);
};

	

//bool Date::valid() const {
//    // This function will check the given date is valid or not.
//    // If the date is not valid then it will return the value false.
//    // Need some more checks on the year, though
//    if (_year < 0) return false;
//    if (_month > 12 || _month < 1) return false;
//    if (_day > 31 || _day < 1) return false;
//    if ((_day == 31 &&
//        (_month == 2 || _month == 4 || _month == 6 || _month == 9 || _month == 11)))
//        return false;
//    if (_day == 30 && _month == 2) return false;
//    if (_year < 2000) {
//        if ((_day == 29 && _month == 2) && !((_year - 1900) % 4 == 0)) return false;
//    };
//    if (_year > 2000) {
//        if ((_day == 29 && _month == 2) && !((_year - 2000) % 4 == 0)) return false;
//    };
//    return true;
//};



//bool operator == (const Date& d1, const Date& d2) {
//    // check for equality
//    if (!d1.valid()) { return false; };
//    if (!d2.valid()) { return false; };
//    if ((d1.getDay() == d2.getDay())
//        && (d1.getMonth() == d2.getMonth())
//        && (d1.getYear() == d2.getYear())) {
//        return true;
//    };
//    return false;
//}
//bool operator !=(const Date& d1, const Date& d2) {
//    return !(d1 == d2);
//}
//bool operator < (const Date& d1, const Date& d2) {
//    if (!d1.valid()) { return false; }; // not meaningful, return anything
//    if (!d2.valid()) { return false; }; // should really be an exception, but ?
//    if (d1.getYear() < d2.getYear()) { return true; }
//    else if (d1.getYear() > d2.getYear()) { return false; }
//    else { // same year
//        if (d1.getMonth() < d2.getMonth()) { return true; }
//        else if (d1.getMonth() > d2.getMonth()) { return false; }
//        else { // same month
//            if (d1.getDay() < d2.getDay()) { return true; }
//            else { return false; }
//        };
//    };
//    return false;
//};
//bool operator > (const Date& d1, const Date& d2) {
//    if (d1 == d2) { return false; }; // this is strict inequality
//    if (d1 < d2) { return false; };
//    return true;
//}
//bool operator <=(const Date& d1, const Date& d2) {
//    if (d1 == d2) { return true; }
//    return (d1 < d2);
//}
//bool operator >=(const Date& d1, const Date& d2) {
//    if (d1 == d2) { return true; };
//    return (d1 > d2);
//};
//
//ostream& operator<<(ostream& out, const Date& dt) {
//    string m[] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
//    out << dt._day << "." << m[dt._month - 1] << "." << dt._year;
//    return out;
//}
