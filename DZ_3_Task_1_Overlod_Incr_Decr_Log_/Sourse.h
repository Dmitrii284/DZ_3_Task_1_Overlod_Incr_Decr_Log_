#ifndef SOURSE_H_
#define SOURSE_H_

/*Тема: Перегрузка инкремента и декремента. Перегрузка
логических операторов. Возврат по ссылке. Перегрузка
оператора присваивания

Задание 1.
Создать класс Overcoat (верхняя одежда).
Реализовать перегруженные операторы:
1. Проверка на равенство типов одежды (операция = =).
2. Операцию присваивания одного объекта в другой
(операция =).
3. Сравнение по цене двух пальто одного типа (операция>).

Задание 2.
Создать класс Flat (квартира).
Реализовать перегруженные операторы:
1. Проверка на равенство площадей квартир (операция
==).
2. Операцию присваивания одного объекта в другой
(операция =).
3. Сравнение двух квартир по цене (операция>)
*/

// Task 1 
#include<iostream>
#include<string>
#include<cstdint>

class Overcoat
{
private:
	const char* _type = nullptr;// Верхняя, Повседневная, Домашняя 
	const char* _obj = nullptr;// Брюки или халат или пальто
	const char* _country = nullptr;// Страна производитель
	float _price = 0;// Стоимость по прайсу 
public:
	Overcoat(const char* type, const char* obj, const char* country, float price);
	Overcoat(const char* type);
	Overcoat(const char* type, const char* obj);
	Overcoat(const char* type, const char* obj, const char* country);
	Overcoat(const Overcoat& overcoat);
	~Overcoat();
	void Print();	
	
	const Overcoat& operator=(const Overcoat&);
	bool operator == (const Overcoat&) const; //Операция Сравнения 
	bool operator != (const Overcoat& p1) const; //Операция Неравенства.
	bool operator = ( Overcoat& p1); //Операция присваивания
	bool operator>(const Overcoat& p1) const; //Операция > перегрузки знака >
	
};

#endif // !SOURSE_H;