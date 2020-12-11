//#include "Date.h"
//
//bool Date::leap(int y) {
//    return ((y % 4 == 0 && y % 100 != 0) || y % 400);
//}
//
//int Date::maxday() {
//    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    if (leapyear)days[1] = 29;
//    return days[month - 1];
//}
//Date& Date::operator+=(int d) {
//    if (day + d > maxday()) {
//        d -= maxday() - day;
//        if (++month > 12) {
//            month = 1;
//            year++;
//        }
//        while (d / maxday()) {
//            if (++month > 12) {
//                month = 1;
//                year++;
//            }
//            d -= maxday();
//        }
//        day = d;
//    }
//    else day += d;
//    return *this;
//}
//Date& Date::operator-=(int d) {
//    if (day - d < 1) {
//        d -= day;
//        if (--month == 0) {
//            month = 12;
//            year--;
//        }
//        while (d / maxday()) {
//            d -= maxday();
//            if (--month == 0) {
//                month = 12;
//                year--;
//            }
//        }
//        day = maxday() - d;
//    }
//    else day -= d;
//    return *this;
//}
//#include <sstream> //stringstream       
//std::string Date::operator-(Date& dt) {
//    int d, m, y;
//    if (year >= dt.year) {
//        y = year - dt.year;
//        if (month > dt.month) {
//            m = month - dt.month;
//            d = day + dt.maxday() - dt.day;
//            if (d > dt.maxday())d -= dt.maxday();
//            else --m;
//            --y;
//        }
//        else {
//            m = 12 - month + dt.month;
//            d = dt.day + maxday() - day;
//            if (d > maxday())d -= maxday();
//            else --m;
//        }
//    }
//    else {
//        y = dt.year - year;
//        if (month > dt.month) {
//            m = 12 - month + dt.month;
//            d = day + dt.maxday() - dt.day;
//            if (d > dt.maxday())d -= dt.maxday();
//            else --m;
//            --y;
//        }
//        else {
//            m = dt.month - month;
//            d = maxday() - day + dt.day;
//            if (d > maxday())d -= maxday();
//            else --m;
//        }
//    }
//    std::string s;
//    std::stringstream ss;
//    ss << d << " days " << m << " month " << y << " years";
//    getline(ss, s);
//    return s;
//}
//bool Date::operator==(Date& dt) {
//    return day == dt.day && month == dt.month && year == dt.year;
//}
//std::ostream& operator<<(std::ostream& os, const Date& dt) {
//    std::string m[] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
//    os << dt.day << " " << m[dt.month - 1] << " " << dt.year;
//    return os;
//}