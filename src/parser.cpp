#include <iostream>
#include "Register.h"

using namespace std;

class Parser
{

};

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

