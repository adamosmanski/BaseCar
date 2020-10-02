#include "Cars.h"

Cars::Cars()
{
	this->value = 0;
	this->mark = " ";
	this->name = " ";
	this->choose = 0;
}

Cars::~Cars()
{
}

void Cars::menu()
{
	cout << "Base vehicle !" << "\n";
	cout << "Choose option:" << "\n\n";
	cout << "1. Show Cars." << "\n";
	cout << "2. Show Motors." << "\n";
	cout << "3. Add Vehicle." << "\n";
	cout << "4. Exit\n";

	cin >> this->choose;
	switch (this->choose)
	{
	case '1':
		//this->Show_Cars();
		break;
	case '2':
		break;
	case '3':
		this->add_Cars();
		break;
	default:
		break;
	}

}

void Cars::add_Cars()
{
	cout << "Y - Continue" << "\n";
	cout << "N - Return" << "\n";
	cin >> this->choose;
	if (this->choose != 'n')
	{
		cout << "Enter: " << "\n";
		cout << "Value: "; cin >> this->value;
		cout << "Mark: "; cin >> this->mark;
		cout << "Name: "; cin >> this->name;
		fstream	file("cars.txt", ios::app);
		if (file.good() == true)
		{

			file << "Wartoœæ: " << this->value << "\n";
			file << "Marka: " << this->mark << "\n";
			file << "W³aœciciel: " << this->name << "\n";
		}
		else
		{
			cout << "Error!\n";
		}
		file.close();
	}
	else
	{
		system("cls");
		return this->menu();
	}
}
