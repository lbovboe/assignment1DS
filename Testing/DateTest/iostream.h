#ifndef iostream_h
#define iostream_h

#include <iostream>

//---------------------------------------------------------------------------------

using namespace std;

//---------------------------------------------------------------------------------

#include "Date.h"

/**
 * @class iostream
 * @brief Associative class to overload input and output stream
 *
 * @author CAI JIANBO
 * @version 01
 * @date 10/10/2020
 */
class iostream {
    
public:
    /**
     * @brief Overloading output stream for date class
     */
    ostream & operator << (const Date & dateObj);
    // Output stream overloading for date
    
    /**
     * @brief Overloading input stream for date class
     */
    istream & operator >> (Date & dateObj);
    // Input stream overloading for date
};

//---------------------------------------------------------------------------------

ostream & operator << (ostream & os, const Date & dateObj) {
    os << "Date: " << dateObj.getDay()
       << "/" << dateObj.getMonth()
       << "/" << dateObj.getYear() << "\n"; // Format to output date object
    return os;
}

istream & operator >> (istream & is, Date & dateObj) {
    string day, month, year; // Initialise as string to use getline function

    getline(is, day, '/'); // Get line with delimiter
    getline(is, month, '/');
    getline(is, year, ' ');

    dateObj.setDay(stoi(day)); // Set attributes with stoi (string to integer)
    dateObj.setMonth(stoi(month));
    dateObj.setYear(stoi(year));

    return is;
}

#endif /* iostream_h */
