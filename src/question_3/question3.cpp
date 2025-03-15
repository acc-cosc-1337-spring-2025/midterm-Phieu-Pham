#include "question3.h"

bool test_config()
{
    return true;
}

string get_factorial_sequence (int number){
    int int_result = 1;
    string string_result = "1";

    for (int i = 1; i <= number; i++){
        int_result = int_result * i;

        if ( i > 1){
            string_result.append("x");
            string_result.append(std::to_string(i));
        }
    }
    
    string_result.append("=");
    string_result.append(std::to_string(int_result));
    
    return string_result;
}