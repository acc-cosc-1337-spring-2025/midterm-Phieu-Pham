#include "question2.h"

bool test_config()
{
    return true;
}

int get_earned_points(int sold){
    int point;

    if (sold >= 1 && sold <= 5){
        point = sold;
    }
    else if (sold >= 6 && sold <= 10){
        point = 5 * sold;
    }
    else if (sold >= 11 && sold <= 15){
        point = 10 * sold;
    }
    else if (sold >= 16){
        point = 15 * sold;
    }

    return point;
}