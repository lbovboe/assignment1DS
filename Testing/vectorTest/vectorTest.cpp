
#include <iostream>
#include <stdio.h>

using namespace std;

#include "vector.h"

int main(void) {
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
    
    cout << endl;
    
    cout << "v1 current size" << endl;
    cout << v1.size() << endl;
    cout << "v1 current capactity" << endl;
    cout << v1.capacity() << endl;
    
    cout << endl;
    
    cout << "Adding number 6 into the vector. Capacity of vector should double" << endl;
    
    v1.push_back(6);
    v1.print();
    
    cout << endl;
    
    cout << "v1 current size" << endl;
    cout << v1.size() << endl;
    cout << "v1 current capactity" << endl;
    cout << v1.capacity() << endl;
    
    cout << endl;
    
    cout << "Getting the item at v1's position 1" << endl;
    cout << v1.at(1) << endl;
    
    cout << endl;
    
    cout << "Deleting the last item of v1" << endl;
    cout << v1.pop_back() << endl << endl;
    v1.print();
    
    cout << endl;
    
    cout << "v1 current size" << endl;
    cout << v1.size() << endl;
    cout << "v1 current capactity" << endl;
    cout << v1.capacity() << endl;
    
    cout << endl;
    
    cout << "Clearing the vector" << endl;
    v1.clear();
    
    cout << "v1 current size" << endl;
    cout << v1.size() << endl;
    cout << "v1 current capactity" << endl;
    cout << v1.capacity() << endl;

    return 0;
}


