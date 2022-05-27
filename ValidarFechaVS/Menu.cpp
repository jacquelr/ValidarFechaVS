#include "Menu.h"
#include <iostream>

using namespace std;

void Menu::printFormat() {
    cout << "\nSeleccione el formato de la fecha que va a ingresar:\n1. dd/mm/yyyy\n2. yyyy/mm/dd\n3. mm/dd/yyyy\n";
    cout << "4. Salir" << endl;
    cin >> option;
}

void Menu::askDate() {
    cout << "\033[0;0H\033[2J" << endl;
    switch (option) {
    case 1:
        cout << "Ingrese una fecha para validar: " << endl;
        cout << "D�a: ";
        cin >> inDay;
        cout << "Mes: ";
        cin >> inMonth;
        cout << "A�o: ";
        cin >> inYear;
        break;
    case 2:
        cout << "Ingrese una fecha para validar: " << endl;
        cout << "A�o: ";
        cin >> inYear;
        cout << "Mes: ";
        cin >> inMonth;
        cout << "D�a: ";
        cin >> inDay;
        break;
    case 3:
        cout << "Ingrese una fecha para validar: " << endl;
        cout << "Mes: ";
        cin >> inMonth;
        cout << "D�a: ";
        cin >> inDay;
        cout << "A�o: ";
        cin >> inYear;
        break;
    case 4:
        cout << "Hasta luego.";
        break;
    default: cout << "Ingrese una opci�n v�lida.\n";
    }
}


int Menu::getOption() {
    return option;
}

int Menu::getDay() {
    return inDay;
}

int Menu::getMonth() {
    return inMonth;
}

int Menu::getYear() {
    return inYear;
}