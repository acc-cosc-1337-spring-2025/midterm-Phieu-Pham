#include <iostream>
#include "question2.h"

using std::cout;
using std::cin;

int main()
{
    int input;
    int result;

    do{ 
        cout << "Enter number of widgets sold (enter 0 to exit): ";
        cin >> input;

        if (input < 0){
            cout << "The number must be greater than 0 (enter 0 to exit): ";
            cin >> input;
        }
        else if ( input > 0){
            result = get_earned_points(input);
            cout << "Points Earned: " << result << "\n";
        }

    } while (input != 0);

    return 0;
}