#include <iostream>
#include "Testing/vectorTest/vector.h"
#include "Testing/DateTest/Date.h"
#include "Testing/DateTest/iostream.h"

using namespace std;
int main(int argc, char const *argv[])
{
    cout << "***** vector Testing *****" << endl << endl;
    
    cout << "Initialising vector<int> v1" << endl << endl;
    
    vector<int> v1;
    
    cout << "v1 current size" << endl;
    cout << v1.size() << endl;
    cout << "v1 current capactity" << endl;
    cout << v1.capacity() << endl;

    cout << endl;
    
    cout << "Adding the numbers 1 to 5 into the vector" << endl;;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.print();

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
    
    return 0;
}
