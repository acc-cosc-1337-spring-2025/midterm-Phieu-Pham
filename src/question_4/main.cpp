#include <iostream>
#include "question4.h"

using std::cin;
using std::cout;

int main()
{
    double grade;
    string result;

    do{
        cout << "Enter a double value grade point in range of 0 to 4 ( enter 5 to quit): ";
        cin >> grade;

        while (grade >= 0 && grade <= 4){
            result = gpa_to_letter_grade(grade);
            cout << result << "\n";
            cout << "Enter a double value grade point in range of 0 to 4 ( enter 5 to quit): ";
            cin >> grade;
        }

    } while ( grade != 5);

    return 0;
}