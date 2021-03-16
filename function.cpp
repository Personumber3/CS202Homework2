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

std::vector<int> Value::getNums(){return _numbers_;}

std::string Value::getWord(){return _words_;}
std::vector<std::string> Value::getWords(){return _wordlist_;}

int queue(const int data){return 1;}
int stack(const int data){return 1;}
void insert(const int data){}
void search(const int data){}
