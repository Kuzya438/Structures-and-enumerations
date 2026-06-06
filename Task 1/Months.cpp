#include <iostream>
#include <cstdlib>

enum class Months
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December,
};

int main() {
	setlocale(LC_ALL, "RU");

	int num{};
	Months monthNumber{};

	do {
		std::cout << "Введите номер месяца: ";
		std::cin >> num;
		monthNumber = static_cast<Months>(num);

		switch (monthNumber) {
		case static_cast<Months>(0): {
			std::cout << "До свидания";
			break;
		}
		case Months::January: {
			std::cout << "Январь" << std::endl;
			break;
		}
		case Months::February: {
			std::cout << "Февраль" << std::endl;
			break;
		}
		case Months::March: {
			std::cout << "Март" << std::endl;
			break;
		}
		case Months::April: {
			std::cout << "Апрель" << std::endl;
			break;
		}
		case Months::May: {
			std::cout << "Май" << std::endl;
			break;
		}
		case Months::June: {
			std::cout << "Июнь" << std::endl;
			break;
		}
		case Months::July: {
			std::cout << "Июль" << std::endl;
			break;
		}
		case Months::August: {
			std::cout << "Август" << std::endl;
			break;
		}
		case Months::September: {
			std::cout << "Сентябрь" << std::endl;
			break;
		}
		case Months::October: {
			std::cout << "Октябрь" << std::endl;
			break;
		}
		case Months::November: {
			std::cout << "Ноябрь" << std::endl;
			break;
		}
		case Months::December: {
			std::cout << "Декабрь" << std::endl;
			break;
		}
		default: {
			std::cout << "Неправильный номер!" << std::endl;
			break;
		}
		}
	} while (monthNumber != static_cast<Months>(0));

	return EXIT_SUCCESS;
}