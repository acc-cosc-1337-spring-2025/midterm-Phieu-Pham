#include "question1.h"
#include <string>

using std::string;

bool test_config()
{
    return true;
}

string get_fib_sequence(int number){
    int a = 0;
    int b = 1;
    int c = 0;
    string d = "0 1 ";

    for (int i = 2; i <= number; i++){
        c = a + b;
        a = b;
        b = c;

        d.append(std::to_string(c));
        d.append(" ");
    }

    return d;
}