#include "stdafx.h"
#include "News.h"
#include <iostream>

using namespace std;

News::News()
{
	cout << "Вызывается конструктор новостей(производный)" << endl;
}
void News::setsort(char* sort)
{
	this->sort = sort;
}
void News::getsort()
{
	cout << "вид новостей: " << this->sort << endl;
}
News::~News()
{
	cout << "Вызывается деструктор новостей" << endl;
}
