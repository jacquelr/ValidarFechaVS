#pragma once
class Date {
private:
    int day, month, year;
    int lastDay = 30;
public:
    Date(int inMonth, int inDay, int inYear);
    void validate();

    //Date & operator --();

    Date& operator ++() {
        ++day;
        return *this;
    }

    Date operator ++ (int) { // postfix increment
        Date copy(month, day, year);
        ++day;
        return copy; // copy of instance before increment returned
    }

    Date operator -- (int) { // postfix increment
        Date copy(month, day, year);
        --day;
        return copy; // copy of instance before increment returned
    }
};