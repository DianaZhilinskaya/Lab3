#pragma once 
#include "TP.h"
class Film: public TP
{ 
	char* genre;
public:
	Film();
	void setgenre(char* genre);
	void getgenre();
	~Film();
};