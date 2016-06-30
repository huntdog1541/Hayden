//
// Created by David Hunt on 6/29/16.
//

#ifndef HAYDEN_REGISTER_H
#define HAYDEN_REGISTER_H


class Register {
private:
    int val;
public:
    Register();
    Register(int value);
    ~Register();
    int getValue();
    void setValue(int value);
};


#endif //HAYDEN_REGISTER_H
