//
// Created by David on 6/30/2016.
//
#include <string>

#ifndef HAYDEN_SYMBOL_H
#define HAYDEN_SYMBOL_H

struct entry{
    std::string word;
    int tokenValue;
};

class Symbol {

private:
   struct entry symtable[1000];
public:
    Symbol();
    ~Symbol();
};


#endif //HAYDEN_SYMBOL_H
