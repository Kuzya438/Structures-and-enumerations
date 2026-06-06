#include <iostream>
#include <cstdlib>
#include <string>

struct Address {
	std::string city{};
	std::string street{};
	int house{};
	int flat{};
	int index{};
};

void print_address(Address& variable) {
	std::cout << "Город: " << variable.city << std::endl;
	std::cout << "Улица: " << variable.street << std::endl;
	std::cout << "Номер дома: " << variable.house << std::endl;
	std::cout << "Номер квартиры: " << variable.flat << std::endl;
	std::cout << "Индекс: " << variable.index << std::endl << std::endl;
}

int main() {
	setlocale(LC_ALL, "RU");

	Address people1{};

	people1.city = "Москва";
	people1.street = "Арбат";
	people1.house = 12;
	people1.flat = 8;
	people1.index = 123456;

	Address people2{ "Ижевск", "Пушкина", 59, 143, 953769 };

	print_address(people1);
	print_address(people2);

	return EXIT_SUCCESS;
}