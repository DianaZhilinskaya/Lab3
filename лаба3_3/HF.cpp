#include "stdafx.h"
#include "HF.h"
#include <iostream>
using namespace std;

HF::HF()
{
	cout << "���������� ����������� ��������������� ������" << endl;
}

void HF::setkategorii(char* kategorii)
{
	this->kategorii = kategorii;
}

char HF::getkategorii()
{
	cout << "��������� ��������������� ������: " << this->kategorii << endl;
	return 0;
}


HF::~HF()
{
	cout << "���������� ���������� ��������������� ������(�����������)" << endl;
}



HF::Director::Director()
{
	cout << "���������� ����������� ��������(�����������, ���������)" << endl;
}

void HF::Director::setname2(char* name2)
{
	this->name2 = name2;
}

char HF::Director::getname2()
{
	cout << "���, ������� � �������� ��������: " << this->name2 << endl;
	return 0;
}

void HF::Director::setage(char* age)
{
	this->age = age;
}

char HF::Director::getage()
{
	cout << "������� ��������: " << this->age << endl;
	return 0;
}

HF::Director::~Director()
{
	cout << "���������� ���������� ��������������� ������" << endl;
}
