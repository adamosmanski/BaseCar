#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Cars
{
private:
	string mark;
	string name;
	char choose;
	double value;
	char exit_Program;
	
public:
	Cars();
	~Cars();
	void menu();
	void add_Cars();
	//void Show_Cars();
};

