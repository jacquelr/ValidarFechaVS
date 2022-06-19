#include <iostream>
#include <stdexcept>
#include <iomanip>
#include <ctime>
#include <sstream>
#include "Valid.h"
#include "Menu.h"
#include "Date.h"

#pragma warning(disable : 4996)

using namespace std;

void Valid::run() {
    Menu b;

    while (option != 4) {

        auto t = time(nullptr);
        auto tm = *localtime(&t);
        cout << put_time(&tm, "Hoy es: %d-%m-%Y") << endl;

        b.printFormat();
        option = b.getOption();
        b.askDate();
        inDay = b.getDay();
        inMonth = b.getMonth();
        inYear = b.getYear();

        Date prueba(inMonth, inDay, inYear);
        try {
            prueba.validate();
        }
        catch (invalid_argument& error) {
            cerr << error.what();
        }
    }
}