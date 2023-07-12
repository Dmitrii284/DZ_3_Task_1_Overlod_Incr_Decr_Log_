#include"Sourse.h"

Overcoat::Overcoat(const char* type, const char* obj, const char* country, double price) :_price{ price }
{
	_type = new char[strlen(type)];
	_type = type;
	_obj = new char[strlen(obj)];
	_obj = obj;
	_country = new char[strlen(country)];
	_country = country;
}

Overcoat::Overcoat(Overcoat& overcoat)
{
	_type = overcoat._type;
	_obj = overcoat._obj;
	_country = overcoat._country;
	_price = overcoat._price;
}

void Overcoat::Print()
{
	std::cout << "Type: " << _type << '\n';
	std::cout << "Object:" << _obj << '\n';
	std::cout << "Country: " << _country << '\n';
	std::cout << "Price: " << _price << '\n';
	std::cout << "____________________________\n";
}
//Операция Сравнения Цен
bool Overcoat::operator==(Overcoat& overcoat)
{
	if (overcoat._price == this->_price) return true;
	return false;
}
//Операция присваивания
Overcoat& Overcoat::operator=(Overcoat& overcoat)
{
	if (this != &overcoat)
	{
		this->_type = overcoat._type;
		this->_price = overcoat._price;
		this->_country = overcoat._country;
	}
	return *this;
}
// Операция боьлше 
bool Overcoat::operator>(Overcoat& p1) { return this->_price > p1._price ? this->_price : p1._price; }

Overcoat::~Overcoat()
{
	delete[]_type;
	delete[]_obj;
	delete[]_country;
}

