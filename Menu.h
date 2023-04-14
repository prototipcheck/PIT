#include <iostream>
using namespace std;
#include <string>



void createEmployee() {
	cout << "Внесите информацию о сотруднике: " << endl;
	cout << "Имя: ";
	string name;
	cin >> name;
	cout << "Отдел: ";
	string department;
	cin >> department;
	cout << "Логин: ";
	string login;
	cin >> login;
	cout << "Пароль: ";
	string password;
	cin >> password;

}

void authorizeEmplpyee() {
	cout << "-----Авторизация-----" << endl;
	cout << "Имя: ";
	string name;
	cin >> name;
	cout << "Логин: ";
	string login;
	cin >> login;
	cout << "Пароль: ";
	string password;
	cin >> password;
}

void menu() {
	setlocale(LC_ALL, "Russian");
	int answer = 0;
	while (answer != 3) {
		cout << endl;
		cout << "Выберите, что вы хотите сделать:" << endl;
		cout << "------------------------" << endl;
		cout << "1. Создать сотрудника" << endl;
		cout << "2. Войти как сотрудник" << endl;
		cout << "3. Выйти из программы" << endl;
		cout << "------------------------" << endl;
		cout << "Ваш выбор: ";
		cin >> answer;
		cout << endl;
		switch (answer) {
		case 1:
		{
			createEmployee();
			cout << "Сотрудник успешно создан" << endl;
			break;
		}
		case 2:
		{
			authorizeEmplpyee();
			cout << "Авторизация прошла успешно" << endl;
			break;
		}
		}
	}

}

int main() {

	menu();

	return 0;
}