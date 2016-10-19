#pragma once 
class TP
{
	char* time;
	char* name;
public:
	TP();
	void settime(char* time);
    void gettime();
	void setname(char* name);
	void getname();
	~TP();
};