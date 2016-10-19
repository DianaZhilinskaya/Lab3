#pragma once 
#include "Film.h"
class HF : public Film
{
	char* kategorii;
public:
	class Director
	{
		char* name2;
		char* age;
	public:
		Director();
		void setname2(char* name2);
		char getname2();
		void setage(char* age);
		char getage();
		~Director();
	}D;


	
	HF();
	void setkategorii(char* kategorii);
	char getkategorii();
	~HF();
};