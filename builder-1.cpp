#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	public:
		int id;
		char name[100];
		int salary;
		char address[100];
		char email[100];
		int cont;
		char experience[100];
		void setData()
		{
			cout<<"Enter id of employee:-"<<endl;
			cin>>id;
			cout<<"Enter name of employee:-"<<endl;
			cin>>name;
			cout<<"Enter salary of employe:-"<<endl;
			cin>>salary;
			cout<<"Enter address of employee:-"<<endl;
			cin>>address;
			cout<<"Enter email of employee:-"<<endl;
			cin>>email;
			cout<<"Enter experience of employee:-"<<endl;
			cin>>experience;
			cout<<"Enter cont of employee:-"<<endl;
			cin>>cont;
			
		}
		void getData()
		{
			cout<<endl<<id<<"name:-"<<name<<endl;
			cout<<"salary:-"<<salary<<endl;
			cout<<"address:-"<<address<<endl;
			cout<<"Email:-"<<email<<endl;
			cout<<"Experience:-"<<experience<<endl;
		}
};
int main()
{
	employee e1;
	e1.setData();
	e1.getData();
}
