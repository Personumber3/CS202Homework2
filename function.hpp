//
//  function.hpp
//  CS202 Homework 2
//
//  Created by Alden Ahern on 2/22/21.
//

#ifndef function_hpp
#define function_hpp

#include <stdio.h>
#include <list>

struct Value{
public:
    Value(std::list<int> &nums);

    std::list<int> _numbers_;
};

void queue(Value &data, const int &num);
void stack(Value &data, const int &num);

void print(Value const &data);

#endif /* function_hpp */
