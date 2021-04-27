//
//  function.cpp
//  CS202 Homework 2
//
//  Created by Alden Ahern on 2/22/21.
//

#include "function.hpp"
#include <iostream>

Value::Value(std::list<int> &nums):_numbers_(nums){}

void queue(Value &data, const int &num){
    data._numbers_.push_back(num);
    data._numbers_.pop_front();
}

void stack(Value &data,const int &num){
    data._numbers_.pop_back();
    data._numbers_.push_back(num);
}

std::list<int>::iterator mySearch(Value &data, const int &num){
    for (auto it = data._numbers_.begin(); it != data._numbers_.end(); ++it){
        if(*it == num){
            return it;
        }
    }
}

void insert(Value &data, std::list<int>::iterator position, const int &num){
    data._numbers_.insert(position,num);
}

void search_n_insert(Value &data, int old_data, int update_data){
    auto position = mySearch(data,old_data);
    insert(data,position,update_data);
}

void print(Value const &data){
    for(auto i : data._numbers_){
        std::cout << i << ", ";
    }
    std::cout << std::endl;
}


void printPointer(int &i){
    int* iptr = &i;
    // the unary * operator dereferences the pointer
    std::cout << "i = " << *iptr << "\n";
    std::cout << "&i = " << iptr << "\n";
}