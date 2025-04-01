#include <iostream>
#include "../include/Time.h"
using namespace std;

// Overload the + operator
Time Time::operator+(const Time &other) const{
    int totalMinutes = minutes + other.minutes;
    int newHours = hours + other.hours + totalMinutes / 60;
    int newMinutes = totalMinutes % 60;
    return Time(newHours % 24, newMinutes); 
}

// Overload the += operator
Time& Time::operator+=(const Time &other){
    int totalMinutes = minutes + other.minutes;
    hours = hours + other.hours + totalMinutes / 60;
    minutes = totalMinutes % 60;
    hours %= 24; // Handle hours wrapping around
    return *this;
}

// Overload the < operator
bool Time::operator<(const Time &other) const{
    if (hours < other.hours) {
        return true;
    } else if (hours == other.hours) {
        return minutes < other.minutes;
    } else {
        return false;
    }
}

// Overload the > operator
bool Time::operator>(const Time &other) const{
    if (hours > other.hours) {
        return true;
    } else if (hours == other.hours) {
        return minutes > other.minutes;
    } else {
        return false;
    }
}

// Overload the == operator
bool Time::operator==(const Time &other) const{
    return hours == other.hours && minutes == other.minutes;
}

// Overload the friend function operator<<
ostream &operator<<(ostream &os, const Time &tm){
    os << tm.getHours() << ":" << (tm.getMinutes() < 10 ? "0" : "") << tm.getMinutes();
    return os;
}
