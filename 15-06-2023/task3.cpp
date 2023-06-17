#include<iostream>

using namespace std;

class Employee1{
	private:
		int id;
		char name[100];
		char roll[100];
	public:
		void setter1(){
			cout<<"Enter id :";
			cin>>id;
			
			cout<<"Enter the Name :";
			cin>>name;
			
			cout<<"Enter the Roll :";
			cin>>roll;
			
		}
		void getter1(){
			cout<<"Id :"<<id<<endl;
			
			cout<<"Name :"<<name<<endl;
			
			cout<<"Roll :"<<roll<<endl<<endl;
	}
};
class Employee2{
	private:
		int id;
		char name[100];
    	char roll[100];
	public:
		void setter2(){
			cout<<"Enter id :";
			cin>>id;
			
			cout<<"Enter the Name :";
			cin>>name;
			
			cout<<"Enter the Roll :";
			cin>>roll;
			
		}
		void getter2(){
			cout<<"Id :"<<id<<endl;
			
			cout<<"Name :"<<name<<endl;
			
			cout<<"Roll :"<<roll<<endl<<endl;
	}
};
class Employee3{
	private:
		int id;
		char name[100];
		char roll[100];
	public:
		void setter3(){
			cout<<"Enter id :";
			cin>>id;
			
			cout<<"Enter the Name :";
			cin>>name;
			
			cout<<"Enter the Roll :";
			cin>>roll;
			
		}
		void getter3(){
			cout<<"Id :"<<id<<endl;
			
			cout<<"Name :"<<name<<endl;
			
			cout<<"Roll :"<<roll<<endl;
	}
};
class Manager :public Employee1,public Employee2,public Employee3{
	public:
		void getter(){
			cout<<"Comapany Name : IT HUB4U pvt limated "<<endl;
			cout<<"Manager Name : Rocky Singh"<<endl;
			cout<<"State : Gujarat "<<endl<<endl<<endl;
		}
};
int main(){
	Manager obj;
	
	obj.getter();
	
	obj.setter1();
	obj.setter2();
	obj.setter3();
	
	obj.getter1();
	obj.getter2();
	obj.getter3();
	
	return 0;
}
