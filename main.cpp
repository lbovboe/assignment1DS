#include "Testing/vectorTest/vector.h"
#include <iostream>
#include <stdio.h>
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
    return 0;
}
