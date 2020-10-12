#include <iostream>


using namespace std;

#include "Date.h"
#include "iostream.h"

int main(void) {
    cout << "***** Date Testing *****" << endl << endl;
    
    cout << "Initialising Date object d1" << endl;
    Date d1;
    
    cout << endl;
    
    cout << "***** Setter *****" << endl;
    cout << "Setting day of d1 to 10" << endl;
    d1.setDay(10);
    cout << "Setting month of d1 to 5" << endl;
    d1.setMonth(5);
    cout << "Setting year of d1 to 2020" << endl;
    d1.setYear(2020);
    
    cout << endl;
    
    cout << "***** Getter *****" << endl;
    cout << "Getting day of d1" << endl;
    cout << d1.getDay() << endl;
    cout << "Getting month of d1" << endl;
    cout << d1.getMonth() << endl;
    cout << "Getting year of d1" << endl;
    cout << d1.getYear() << endl;
    
    cout << endl;

    cout << "Constructing Date object d2 with Day, Month and Year (11/06/2020)" << endl;
    Date d2(11, 06, 2020);
    
    cout << endl;
    
    cout << "***** Getter *****" << endl;
    cout << "Getting day of d2" << endl;
    cout << d2.getDay() << endl;
    cout << "Getting month of d2" << endl;
    cout << d2.getMonth() << endl;
    cout << "Getting year of d2" << endl;
    cout << d2.getYear() << endl;
    
    cout << endl;
    
    cout << "Constructing an invalid Date object d3 (40/15/2020)" << endl;
    Date d3(40,15,2020);
    cout << "Getting day of d3" << endl;
    cout << d3.getDay() << endl;
    cout << "Getting month of d3" << endl;
    cout << d3.getMonth() << endl;
    cout << "Getting year of d3" << endl;
    cout << d3.getYear() << endl;
    cout << "Validating d2" << endl;
    cout << d2.validate() << endl;
    cout << "Validating d3" << endl;
    cout << d3.validate() << endl;
    
    cout << endl;
    
    cout << "Output d1, d2 and d3 using overriden output stream" << endl;
    cout << "d1: " << d1 << endl;
    cout << "d2: " << d2 << endl;
    cout << "d3: " << d3 << endl;
    
    
    
    return 0;
}
