//
//  function.cpp
//  CS202 Homework 2
//
//  Created by Alden Ahern on 2/22/21.
//

#include "function.hpp"

Value::Value(const std::vector<int> nums):_numbers_(nums){}
Value::Value(const std::vector<std::string> words):_wordlist_(words){}
Value::Value(const std::string word):_words_(word){}
