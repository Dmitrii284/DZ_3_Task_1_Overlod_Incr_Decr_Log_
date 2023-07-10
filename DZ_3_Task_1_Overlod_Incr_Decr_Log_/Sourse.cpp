#include "Sourse.h"

Overcoat::Overcoat(const char* type, const char* obj, const char* country, uint16_t price) :_price{price}
{ 
	_type = new char[strlen(type)];	
	_obj = new char[strlen(obj)];	
	_country = new char[strlen(country)];	
}
Overcoat::Overcoat(const char* type) : Overcoat(type) { }
Overcoat::Overcoat(const char* type, const char* obj) : Overcoat(type, obj) { }
Overcoat::Overcoat(const char* type, const char* obj, const char* country) : Overcoat(type, obj, country) { }

Overcoat::Overcoat(const Overcoat& overcoat)
{
	_type = overcoat._type;
	_obj = overcoat._obj;
	_country = overcoat._country;
	_price = overcoat._price;
}

void Overcoat::Print()
{
	std::cout << "Type: "<< _type <<'\n';
	std::cout << "Object: "<< _obj <<'\n';
	std::cout << "Country: "<< _country <<'\n';
	std::cout << "Price: "<< _price <<'\n';
}

Overcoat::~Overcoat()
{
	delete[]_type;
	delete[]_obj;
	delete[]_country;
}



