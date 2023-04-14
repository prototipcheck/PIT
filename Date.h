#pragma once

// Обычная дата
class Date {
public:
    Date() {
        year = 0;
        month = 0;
        day = 0;
    }
    Date(int day, int month, int year)  {
        this->year = year;
        this->month = month;
        this->day = day;
    }
    Date(const Date& donor) {
        this->year = donor.year;
        this->month = donor.month;
        this->day = donor.day;
    }
    ~Date() = default;

    void setYear(int val) { year = val; }
    void setMonth(int val) { month = val; }
    void setDay(int val) { day = val; }

    int getYear() { return year; }
    int getMonth() { return month; }
    int getDay() { return day; }

    string toString() {
        return to_string(day) + " " + to_string(month) + " " + to_string(year);
    }

    // Ручной ввод
    void input() {
        cout << "Введите день:" << endl;
        cin >> day;
        cout << "Введите месяц:" << endl;
        cin >> month;
        cout << "Введите год:" << endl;
        cin >> year;
        cout << "Успешно" << endl;
    }


    friend ostream& operator<<(ostream& os, const Date& dt) {
        os << dt.day << '/' << dt.month << '/' << dt.year << endl;
        return os;
    }

    friend istream& operator>>(istream& os, Date& dt) {
        os >> dt.day >> dt.month >> dt.year;
        return os;
    }

private:
    int day; // День
    int month; // Месяц
    int year; // Год
};