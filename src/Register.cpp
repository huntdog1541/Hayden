//
// Created by David Hunt on 6/29/16.
//

#include "Register.h"


Register::Register() { }
Register::Register(int value) { val = value; }
Register::~Register() { }
int Register::getValue() { return val; }
void Register::setValue(int value) { val = value; }