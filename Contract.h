#pragma once

// Отдельный заказ
class Contract {
public:
    Contract() {
        fromCompany = "NaN";
        toCompany = "NaN";
        dateDepartre = Date();
        dateReceiving = Date();
        count = 0;
        value = 0;
    }
    Contract(string fC, string tC, Date dD, Date dR, int count, int value) {
        fromCompany = fC;
        toCompany = tC;
        dateDepartre = dD;
        dateReceiving = dR;
        this->count = count;
        this->value = value;
    }
    ~Contract() = default;

    string toString() {
        return
        fromCompany + " " + toCompany + " " +
        dateDepartre.toString() + " " + dateReceiving.toString() + " " +
        to_string(count) + " " + to_string(value);
    }

    // Ручной ввод
    void input() {
        cout << "Введите:" << endl << "1) Компанию доставки:" << endl;
        cin >> fromCompany;
        cout << "2) Компанию получателя:" << endl;
        cin >> toCompany;
        cout << "3) Дату отправки:" << endl;
        dateDepartre.input();
        cout << "4) Дату получения:" << endl;
        dateReceiving.input();
        cout << "5) Количество предметов для доставки:" << endl;
        cin >> count;
        cout << "6) Цену доставки" << endl;
        cin >> value;
    }


private:
    string fromCompany; // Название компании откуда отправяют
    string toCompany; // Название компании куда отправляют
    Date dateDepartre; // Дата отправки
    Date dateReceiving; // Дата получаения
    int count; // Количество едениц груза
    int value; // Цена доставки
};
