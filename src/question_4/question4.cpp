#include "question4.h"

bool test_config()
{
    return true;
}

string gpa_to_letter_grade(double grade){
    string letter;

    if (grade <= 4){
        letter = "A";
    }
    if (grade < 3.5){
        letter = "B";
    }
    if (grade < 3){
        letter = "C";
    }
    if (grade < 2){
        letter = "D";
    }
    if (grade < 1){
        letter = "F";
    }

    return letter;
}