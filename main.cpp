//
//  main.cpp
//  CS202 Homework 2
//
//  Created by Alden Ahern on 2/12/21.
//

#include <iostream>
#include "function.hpp"
using std::endl;
using std::cout;


int main(int argc, const char * argv[]) {
    std::list<int> myNums(42,14);
    Value George(myNums);

    cout << "Initial List" << endl;
    print(George);

    cout << "Test Queue" << endl;
    queue(George,1);
    print(George);

    cout << "Test Stack" << endl;
    stack(George,2);
    print(George);

    /*
    char area = 3["algorithm"];
    int a = area;
    std::cout << 0["algorithm"] << a << std::endl;
    */
    
    return 0;
}
