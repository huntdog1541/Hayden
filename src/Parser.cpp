//
// Created by David on 6/30/2016.
//

#include "Parser.h"
#include <iostream>
#include "Register.h"

using namespace std;

int main(int argc, char ** argv)
{
    if(argc <= 1)
    {
        fprintf(stderr, "Please enter file to be compiled\n");
    }

    Register r1(34);
    cout << "The value is " << r1.getValue() << endl;
    return 0;
}

Parser::Parser() { }
Parser::~Parser() { }