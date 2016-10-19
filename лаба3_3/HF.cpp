#include "stdafx.h"
#include "HF.h"
#include <iostream>
using namespace std;

HF::HF()
{
	cout << "Вызывается конструктор художественного фильма" << endl;
}

void HF::setkategorii(char* kategorii)
{
	this->kategorii = kategorii;
}

char HF::getkategorii()
{
	cout << "категория художественного фильма: " << this->kategorii << endl;
	return 0;
}


HF::~HF()
{
	cout << "Вызывается деструктор художественного фильма(производный)" << endl;
}



HF::Director::Director()
{
	cout << "Вызывается конструктор режисера(производный, вложенный)" << endl;
}

void HF::Director::setname2(char* name2)
{
	this->name2 = name2;
}

char HF::Director::getname2()
{
	cout << "Имя, фамилия и отчество режисера: " << this->name2 << endl;
	return 0;
}

void HF::Director::setage(char* age)
{
	this->age = age;
}

char HF::Director::getage()
{
	cout << "Возраст режисера: " << this->age << endl;
	return 0;
}

HF::Director::~Director()
{
	cout << "Вызывается деструктор художественного фильма" << endl;
}
