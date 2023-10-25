// my_first_cmake_project.cpp: определяет точку входа для приложения.
//

#include "my_first_cmake_project.h"
#include <iostream>
#include <Windows.h> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string Name;	
	cout << "Введите имя: ";
	cin >> Name;
	cout << "Здравствуйте, " << Name << "!" << endl;
	return 0;
}
