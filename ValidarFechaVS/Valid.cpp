#include <iostream>
#include <stdexcept>
#include "Valid.h"
#include "Menu.h"
#include "Date.h"

using namespace std;

void Valid::run() {
    Menu b;

    while (option != 4) {
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