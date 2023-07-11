#include"Sourse.h"

Overcoat::Overcoat(const char* type, const char* obj, const char* country, float price) :_price{price}
{ 
	_type = new char[strlen(type)];
	_type = type;
	_obj = new char[strlen(obj)];
	_obj = obj;
	_country = new char[strlen(country)];
	_country = country;
}
Overcoat::Overcoat(const char* type) : Overcoat(type,0,0,0) { }
Overcoat::Overcoat(const char* type, const char* obj) : Overcoat(type, obj,0,0) { }
Overcoat::Overcoat(const char* type, const char* obj, const char* country) : Overcoat(type, obj, country, 0) { }

Overcoat::Overcoat(const Overcoat& overcoat)
{
	_type = overcoat._type;
	_obj = overcoat._obj;
	_country = overcoat._country;
	_price = overcoat._price;
}

void Overcoat::Print()
{
	std::cout <<"Type:"<< _type <<'\n';
	std::cout <<"Object:"<< _obj <<'\n';
	std::cout <<"Country:"<< _country <<'\n';
	std::cout <<"Price:"<< _price <<'\n';
	std::cout <<"____________________________\n";
}

bool Overcoat::operator==(const Overcoat&) const
{
	return false;
}
//Операция присваивания
bool Overcoat::operator=( Overcoat& p1) 
{
	int tmp = 0;
	if (p1._type != this->_type)
		this->_type = p1._type;		
	return (this);
}

bool Overcoat::operator>( const Overcoat& p1) const
{
	if (this->_price > p1._price)
		return (this);			
}

bool Overcoat:: operator != (const Overcoat& p1) const
{
	return !(*this == p1);
}



Overcoat::~Overcoat()
{
	delete[]_type;
	delete[]_obj;
	delete[]_country;
}

