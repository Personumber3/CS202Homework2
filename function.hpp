//
//  function.hpp
//  CS202 Homework 2
//
//  Created by Alden Ahern on 2/22/21.
//

#ifndef function_hpp
#define function_hpp

#include <stdio.h>
#include <string>
#include <vector>

struct Value{
public:
    //constructors, if applicable
    Value(const std::vector<int> nums);
    Value(const std::vector<std::string> words);
    Value(const std::string word);

    
    //member functions
    std::vector<int> getNums();
    std::string getWord();
    std::vector<std::string> getWords();
    
private:
    //member data;
    std::string _words_;
    std::vector<int> _numbers_;
    std::vector<std::string> _wordlist_;
    
    std::vector<int> _keys_;
    std::vector<std::string> _values_;
};

#endif /* function_hpp */
