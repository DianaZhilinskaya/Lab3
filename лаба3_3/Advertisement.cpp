#include "stdafx.h"
#include "Advertisement.h"
#include <iostream>

using namespace std;

Advertisement::Advertisement()
{
	cout << "Вызывается конструктор рекламы(производный)" << endl;
}
void Advertisement::setproduct(char* product)
{
	this->product = product;
}
void Advertisement::getproduct()
{
	cout << "рекламируемый продукт: " << this->product << endl;
}
Advertisement::~Advertisement()
{
	cout << "Вызывается деструктор рекламы" << endl;
}
