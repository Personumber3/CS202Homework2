//
//  main.cpp
//  CS202 Homework 2
//
//  Created by Alden Ahern on 2/12/21.
//

#include <iostream>

#include <string>
#include <vector>
#include <chrono>
#include "function.hpp"
#include <algorithm>
#include <random>
using namespace std;


int main(int argc, const char * argv[]) {
    Value Henry("meow");
    vector<int> myNums(42,14);
    Value George(myNums);
    
    cout << "meow" << endl;
    cout << "Henry says " << Henry.getWord() << endl;
    cout << "George's numbers are " << "Currently unavailable. We appologize for the inconvenience." <<endl;
    
    /*
    char area = 3["algorithm"];
    int a = area;
    std::cout << 0["algorithm"] << a << std::endl;
    */
    
    return 0;
}
