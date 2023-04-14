#pragma once

// Список заказов
class OrderList {
public:
    OrderList() {
        list.clear();
    }
    ~OrderList() = default;

    vector<string> getList() { return list; }

    void addContract(Contract val) {
        list.push_back(val.toString());
    }

    // Ручной ввод
    void input() {
        cout << "Введите данные в заданном формате" << endl;
        cout << "Название Название День Месяц Год День Месяц Год Кол-во Цена" << endl;
        string tmp;
        cin >> tmp;
        list.push_back(tmp);
    }


private:
    vector<string> list; // Контейнер-массив с записями контрактов
};