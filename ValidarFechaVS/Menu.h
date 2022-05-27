#pragma once
class Menu {
private:
	int option, inDay, inMonth, inYear;
public:
	void printFormat();
	int getOption();
	void askDate();
	int getDay();
	int getMonth();
	int getYear();
};