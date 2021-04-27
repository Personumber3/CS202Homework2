//
//  main.cpp
//  CS202 Homework 2
//
//  Created by Alden Ahern on 2/12/21.
//

#include "function.hpp"
#include <iostream>
#include <list>
using std::endl;
using std::cout;
#include <memory>

int static_num = 1;

int main(int argc, const char * argv[]) {
    std::list<int> myNums(14,42);
    Value George(myNums);

    cout << "Initial List" << endl;
    print(George);

    cout << "Test Queue" << endl;
    queue(George,1);
    print(George);

    cout << "Test Stack" << endl;
    stack(George,2);
    print(George);

    cout << "Test Search" << endl;
    auto place = mySearch(George,42);
    cout << *place << endl;
    cout << "Test Insert" << endl;
    insert(George,place,10);
    print(George);

    cout << "Test Search_n_Insert" << endl;
    search_n_insert(George,42,14);
    print(George);

    //auto sptr = std::make_unique<int>(static_num);
    cout << "static " << endl;
    printPointer(static_num);
    auto free = std::make_unique<int>(1);
    cout << "free " << endl << *free << "i = " << free << endl;
    int heap_num = 2;
    cout << "heap " << endl;
    printPointer(heap_num);
    int heap2 = 3;
    printPointer(heap2);
    cout << endl << "as you can see, heap is higher than free, which is higher than static, and heap counts down not up." << endl;

    char* sentence = "Hello Meow!";
    cout << endl << sentence << endl;
    to_lower(sentence);

    /*
    char area = 3["algorithm"];
    int a = area;
    std::cout << 0["algorithm"] << a << std::endl;
    */
    
    return 0;
}
