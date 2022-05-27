#include <iostream>
#include <stdexcept>
#include "Date.h"

using namespace std;

Date::Date(int inMonth, int inDay, int inYear) {
    day = inDay;
    month = inMonth;
    year = inYear;
}

void Date::validate() {
    if (month >= 1 && month <= 12) {
        //analizar mes
        switch (month) {
        case 1: lastDay++;
            break;
        case 2:
            if (year % 4 == 0) {
                lastDay--;
            }
            else {
                lastDay = 14 << 1;
            }
            break;
        case 3: lastDay++;
            break;
        case 4: lastDay = 30;
            break;
        case 5: lastDay++;
            break;
        case 6: lastDay = 30;
            break;
        case 7: lastDay++;
            break;
        case 8: lastDay++;
            break;
        case 9: lastDay = 30;
            break;
        case 10: lastDay++;
            break;
        case 11: lastDay = 30;
            break;
        case 12: lastDay++;
            break;
        }
    }
    else {
        throw invalid_argument("\nFecha inválida");
    }

    if (day >= 1 && day <= lastDay) {
        cout << "\nFecha válida" << endl;
    }
    else {
        throw invalid_argument("\nFecha inválida");
    }
}