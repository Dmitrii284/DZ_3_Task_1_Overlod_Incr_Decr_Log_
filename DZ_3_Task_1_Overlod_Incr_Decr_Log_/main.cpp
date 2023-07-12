#include"Sourse.h"
#include<iostream>

int main() {
	setlocale(LC_ALL, "Rus");
	// Создаем объекты класса Overcoat

	std::cout << "ТОВАРЫ ДЛЯ СРАВНЕНИЯ > " << std::endl;
	Overcoat jeans("Casual", "Jeans", "Japan", 2500.520);
	Overcoat trousers("Casual", "Trousers", "Russ", 1500.90);
	jeans.Print();
	trousers.Print();
	std::cout << " Сравнение цен товара одного типа: \n";
	if (jeans > trousers)
		std::cout << "Товар jeans  дороже чем Товар trousers" << std::endl;
	else
		std::cout << "Товар trousers стоит дороже" << std::endl;
	std::cout << "========================================\n" << std::endl;

	std::cout << "ТОВАРЫ ДЛЯ СРАВНЕНИЯ ==" << std::endl;
	Overcoat underpants("Underwear", "Underpants", "Izrail");
	Overcoat thongs("Underwear", "Thongs", "Itale", 8500.20);
	underpants.Print();
	thongs.Print();
	std::cout << " Сравнение цен товара одного типа: \n";
	if (underpants == thongs)
		std::cout << "ЦЕНЫ РАВНЫ" << std::endl;
	else
		std::cout << "Товар НЕ РАВНЫ ПО ЦЕНЕ" << std::endl;
	std::cout << "========================================\n" << std::endl;

	std::cout << "ОПЕРАЦИЯ ПРИСВАИВАНИЯ ТОВАРА   у них два разных типа Tights и Underwear = " << std::endl;
	Overcoat coat("Tights", "Coat", "Indoneziy", 2888000.85);
	Overcoat fur_coat("Underwear", "Fur_coat", "Japan", 555500.550);
	std::cout << "ДО ПРИСВОЕНИЯ " << std::endl;
	coat.Print();
	fur_coat.Print();
	coat = fur_coat;
	std::cout << "Присвоили товарам разного типа ОДИН ТИП = " << std::endl;
	coat.Print();
	fur_coat.Print();
	std::cout << "========================================\n" << std::endl;

	Overcoat bathrobe("Home clothing", "Bathrobe", "Itale", 1700.82);
	bathrobe.Print();
	Overcoat tights("Home clothing", "Tights", "Itale", 800.4);
	tights.Print();

	return 0;
}