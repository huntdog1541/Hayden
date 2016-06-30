//
// Created by David on 6/30/2016.
//

#include "Symbol.h"

Symbol::Symbol() {
    symtable[0].word = "_start"; symtable[0].tokenValue = 300;
    symtable[1].word = "string"; symtable[1].tokenValue = 301;
    symtable[2].word = "("; symtable[2].tokenValue = 302;
    symtable[3].word = ")"; symtable[3].tokenValue = 303;
    symtable[4].word = "["; symtable[4].tokenValue = 304;
    symtable[5].word = "]"; symtable[5].tokenValue = 305;
    symtable[6].word = "{"; symtable[6].tokenValue = 306;
    symtable[7].word = "}"; symtable[7].tokenValue = 307;
    symtable[8].word = "<<"; symtable[8].tokenValue = 308;
    symtable[9].word = ">>"; symtable[9].tokenValue = 309;
    symtable[10].word = "/"""; symtable[10].tokenValue = 310;
    symtable[11].word = ";"; symtable[11].tokenValue = 311;
    symtable[12].word = "/"""; symtable[12].tokenValue = 312;
    symtable[13].word = "cout", symtable[13].tokenValue = 313;
    symtable[14].word = "el", symtable[14].tokenValue = 314;
}
Symbol::~Symbol() { }