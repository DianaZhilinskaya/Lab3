#include "stdafx.h"
#include "Advertisement.h"
#include <iostream>

using namespace std;

Advertisement::Advertisement()
{
	cout << "���������� ����������� �������(�����������)" << endl;
}
void Advertisement::setproduct(char* product)
{
	this->product = product;
}
void Advertisement::getproduct()
{
	cout << "������������� �������: " << this->product << endl;
}
Advertisement::~Advertisement()
{
	cout << "���������� ���������� �������" << endl;
}
