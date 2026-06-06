#include <iostream>
#include <cstdlib>
#include <string>
#include <Windows.h>

struct Info {
	std::string name{};
	double amountOfMoney{};
	int accountNum{};
};

 inline double newInfo(Info& people, double& newAccountOfMoney) {
	return people.amountOfMoney = newAccountOfMoney;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Info people1{};
	double newAccountOfMoney{};
	
	std::cout << "Введите номер счёта: ";
	std::cin >> people1.accountNum;
	std::cout << "Введите имя владельца: ";
	std::cin >> people1.name;
	std::cout << "Введите баланс: ";
	std::cin >> people1.amountOfMoney;
	std::cout << "Введите новый баланс: ";
	std::cin >> newAccountOfMoney;

	std::cout << "Ваш счёт: " << people1.name << ", " << people1.accountNum << ", " << newInfo(people1, newAccountOfMoney);

	return EXIT_SUCCESS;
}
