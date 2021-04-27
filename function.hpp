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
std::list<int>::iterator mySearch(Value &data, const int &num);
void insert(Value &data, std::list<int>::iterator position, const int &num);
void search_n_insert(Value &data, int old_data, int update_data);

void print(Value const &data);

/*
Write a C++ program that tells the order in which static storage, the stack, and the free store
        are laid out in memory. In which direction does the stack grow: upward toward higher
        addresses or downward towards lower addresses? In an array on the free store, are elements
with higher indices allocated at higher or lower addresses?
*/

void printPointer(int &i);


#endif /* function_hpp */
