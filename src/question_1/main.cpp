#include <iostream>
#include "question1.h"

using std::cin;
using std::cout;

int main()
{
    int number;
    string result;

    do{
        cout << "Enter a number in the range of 1 to 15 (0 to exit): ";
        cin >> number;

        while (number >= 1 && number <= 15){
            result = get_fib_sequence(number);
            cout << result << "\n";
            cout << "Enter a number in the range of 1 to 15 (0 to exit): ";
            cin >> number;
        };

    } while (number < 0 || number > 15);

    return 0;
}