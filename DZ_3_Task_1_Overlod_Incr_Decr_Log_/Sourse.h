#ifndef SOURSE_H;
#define SOURSE_H

/*����: ���������� ���������� � ����������. ����������
���������� ����������. ������� �� ������. ����������
��������� ������������

������� 1.
������� ����� Overcoat (������� ������).
����������� ������������� ���������:
1. �������� �� ��������� ����� ������ (�������� = =).
2. �������� ������������ ������ ������� � ������
(�������� =).
3. ��������� �� ���� ���� ������ ������ ���� (��������>).

������� 2.
������� ����� Flat (��������).
����������� ������������� ���������:
1. �������� �� ��������� �������� ������� (��������
==).
2. �������� ������������ ������ ������� � ������
(�������� =).
3. ��������� ���� ������� �� ���� (��������>)
*/

// Task 1 
#include<iostream>
#include<string>
#include<cstdint>

class Overcoat
{
private:
	char* _type = nullptr;// �������, ������������, �������� 
	char* _obj = nullptr;// ����� ��� ����� ��� ������
	char* _country = nullptr;// ������ �������������
	uint16_t _price = -1;// ��������� �� ������ 
public:
	Overcoat(const char* type, const char* obj, const char* country, uint16_t price);
	Overcoat(const char* type);
	Overcoat(const char* type, const char* obj);
	Overcoat(const char* type, const char* obj, const char* country);
	Overcoat(const Overcoat& overcoat);
	void Print();
	~Overcoat();
};

#endif // !SOURSE_H;