#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <filesystem>
using namespace std;

class Cars
{
private:
	string mark;
	string name;
	char choose;
	double value;
	string line;
	
public:
	Cars();
	~Cars();
	void menu();
	void add_Cars();
	void Show_Cars();
	//bool reset(fstream& file);
	void delete_Cars();
};

