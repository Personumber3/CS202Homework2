//
//  function.cpp
//  CS202 Homework 2
//
//  Created by Alden Ahern on 2/22/21.
//

#include "function.hpp"
#include <iostream>

Value::Value(std::list<int> &nums):_numbers_(nums){}

void queue(Value &data, const int num){
    data._numbers_.push_back(num);
    data._numbers_.pop_front();
}

void stack(Value &data,const int num){
    data._numbers_.pop_back();
    data._numbers_.push_back(num);
}

void insert(Value &data, const int &num){

}

void search(const int data){}

void print(Value const &data){
    for(auto i : data._numbers_){
        std::cout << i << ", ";
    }
    std::cout << std::endl;
}