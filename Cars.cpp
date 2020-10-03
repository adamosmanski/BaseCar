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
	cout << "2. Delete cars." << "\n";
	cout << "3. Add Vehicle." << "\n";
	cout << "4. Exit\n";

	cin >> this->choose;
	switch (this->choose)
	{
	case '1':
		this->Show_Cars();
		break;
	case '2':
		this->delete_Cars();
		cout << "\n\n\n" << "Wyczyszczono zawartosc" << "\n\n\n";
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

			file << "Value: " << this->value << "\n";
			file << "Mark: " << this->mark << "\n";
			file << "Name: " << this->name << "\n";
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

void Cars::Show_Cars()
{
	ifstream reading("cars.txt", ios::in);
	if (reading.good() == true)
	{
		while (!reading.eof())
		{
			getline(reading, line);
			cout << line << "\n";
		}
		reading.close();
	}
	else
	{
		cout << "Error!" << "\n";
	}
	cout << "\n\n";
	return this->menu();
}

void Cars::delete_Cars()
{
	ofstream file;
	file.open("cars.txt");
	file.close();
	return this->menu();
}