#include<iostream>
#include<string.h>
using namespace std;
class hotel
{
	private:
	int id,staff_size,room_size;
	char hotelname[100],hoteladdress[100];
	
	public:
	void setData(int id,char hotelname[],char hoteladdress[],int staff_size,int room_size)
	{
		this->id=id;
		strcpy(this->hotelname,hotelname);
		strcpy(this->hoteladdress,hoteladdress);
		this->staff_size=staff_size;
		this->room_size=room_size;
	}	
	void getData()
	{
		cout<<"ID:-"<<id<<endl;
		cout<<"Hotel name:-"<<hotelname<<endl;
		cout<<"Hotel address:-"<<hoteladdress<<endl;
		cout<<"Staff size:-"<<staff_size<<endl;
		cout<<"Room size:-"<<room_size<<endl;
	}
};
int main()
{
	hotel h1;
	h1.setData(1,"ghanshyam","srathana",37,8);
	h1.getData();
}
