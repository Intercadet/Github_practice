
#include "Control.h"
using namespace std;
Control::Control(){}
Control::~Control(){}

void Control:: registerAdressEmployee(I_Employee* add){

	address = add;
}
int Control:: menu(){
	 cout<<"Welcome to my Application"<<endl<<endl;

				cout<<"This app will help you manage employees of your company"<<endl<<endl;

				cout<<"Which category of employee do you want to manage? "<<endl<<endl;
				cout<<"Enter '1' for OrdinaryEmployee"<<endl<<endl;
				cout<<"Enter '2' for Manager"<<endl<<endl;
				cout<<"Enter '3' for Stakeholder"<<endl<<endl;
				cout<<"Enter '4' to exit!"<<endl<<endl;

			cin>> choice;
			return choice;
}

void Control::cyclicTask(){

	 cout<<"Welcome to my Application"<<endl<<endl;

	cout<<"This app will help you manage employees of your company"<<endl<<endl;



	while(choice !=4){
		cout<<"Which category of employee do you want to manage? "<<endl<<endl;
		cout<<"Enter '1' for OrdinaryEmployee"<<endl<<endl;
		cout<<"Enter '2' for Manager"<<endl<<endl;
		cout<<"Enter '3' for Stakeholder"<<endl<<endl;
		cout<<"Enter '4' to exit!"<<endl<<endl;

		cin>> choice;

				switch(choice){

			case 1:
				registerAdressEmployee(&ordinaryEmployee);

				cout<<"Enter '1' to add a new Employee"<<endl<<endl;
				cout<<"Enter '2' to get Employee infos"<<endl<<endl;
				cout<<"Enter '3' to calculate Employee salary"<<endl<<endl;
				cin>> mc;

						switch(mc){
						case 1:

							address->addNewEmployee();

							break;

						case 2:

							cout<<"Enter employee Name: ",cin>>name;
							address->getEmployeeInfos(name);

						    break;

						case 3:

							cout<<"Enter employee ID: ",cin>>id_1;
							cout<<endl;
							cout<<"This employee earn: "<<address->calculate_Salary(id_1)<<" € per month" <<endl<<endl;

						    break;

						default:
							cout<<"you enter an invalid choice"<<endl;
							break;
						}
				          break;

			case 2:

				registerAdressEmployee(&manager);

				cout<<"Enter '1' to add a new Employee"<<endl<<endl;
				cout<<"Enter '2' to get Employee infos"<<endl<<endl;
				cout<<"Enter '3' to calculate Employee salary"<<endl<<endl;
				cin>> t;
				switch(t){
				case 1:

							address->addNewEmployee();
							break;

						case 2:

							cout<<"Enter employee Name: ",cin>>i_name;
							address->getEmployeeInfos(i_name);

							break;

						case 3:

							cout<<"Enter employee ID: ",cin>>id_2;
							cout<<endl;
							cout<<"This employee earn: "<<address->calculate_Salary(id_2)<<" € per month" <<endl<<endl;

						break;

						default:
							cout<<"you enter an invalid choice"<<endl;
							break;
						}

					      break;

			case 3:
				registerAdressEmployee(&stakeholder);
				cout<<"Enter '1' to add a new Employee"<<endl<<endl;
				cout<<"Enter '2' to get Employee infos"<<endl<<endl;
				cout<<"Enter '3' to calculate Employee salary"<<endl<<endl;
				cin>> z;
				switch(z){
				case 1:

					address->addNewEmployee();
					break;

				case 2:

					cout<<"Enter employee Name: ",cin>>n;
					address->getEmployeeInfos(n);

					break;

				case 3:

					cout<<"Enter employee ID: ",cin>>id_3;
					cout<<endl;
					cout<<"This employee earn: "<<address->calculate_Salary(id_3)<<" € per month" <<endl<<endl;

					break;

				default:
					cout<<"you enter an invalid choice"<<endl<<endl;
					break;
				 }
		    break;


			//default:
			//cout<<"THANK YOU!!"<<endl;
			//break;

			}
	    }


cout<<" GOODBYE!!";


}


