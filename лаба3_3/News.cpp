#include "stdafx.h"
#include "News.h"
#include <iostream>

using namespace std;

News::News()
{
	cout << "���������� ����������� ��������(�����������)" << endl;
}
void News::setsort(char* sort)
{
	this->sort = sort;
}
void News::getsort()
{
	cout << "��� ��������: " << this->sort << endl;
}
News::~News()
{
	cout << "���������� ���������� ��������" << endl;
}
