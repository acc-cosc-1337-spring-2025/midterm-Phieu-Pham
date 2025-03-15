#include <iostream>
#include <string>
#include "question3.h"

using std::cin;
using std::cout;
using std::string;

int main()
{
    int number;
    string result;

    do{
        cout << "Enter a number in the range of 1 to 10 (0 to exit): ";
        cin >> number;

        while (number >= 1 && number <= 10)
        {
            result = get_factorial_sequence(number);
            cout << result << "\n";
            cout << "Enter a number in the range of 1 to 10 (0 to exit): ";
            cin >> number;
        }

    } while (number < 0 || number > 10);
    

    return 0;
}