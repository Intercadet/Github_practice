
#pragma once
#include "I_Employee.h"
#include "OrdinaryEmployee.h"
#include "Manager.h"
#include "Stakeholder.h"
#include <array>


class Control
{
public:

	Control();
   ~Control();

	void registerAdressEmployee(I_Employee* add);

	//void registerAdressEmployee(I_Employee add [3U]);


	void cyclicTask();
	int menu();


private:

	//I_Employee* address [3];
	I_Employee *address;

	//std::array<I_Employee* ,3U> address;

	int choice{0};
	int mc{0};
	int id_1{0};
	std::string name;
	int t{0};
	std::string i_name;
	int id_2{0};
	int z{0};
	std::string n;
	int id_3{0};

	OrdinaryEmployee ordinaryEmployee;
	Manager manager ;
	Stakeholder stakeholder ;



};
