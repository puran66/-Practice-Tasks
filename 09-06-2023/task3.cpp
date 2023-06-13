#include<iostream>

using namespace std;

class Hotel{
	private:
		int id;
		char name[30];
		char typ[30];
		int staff;
		int room;
		int year;
		char add[100];
		char rat[30];
		char web[100];
		
	public:
	    void setter(int id){
	    	this -> id=id;
	    	
	    	cout<<"Enter the name :";
	    	cin>>name;
	    	
	    	cout<<"Enter the type :";
	    	cin>>typ;
	    	
	    	cout<<"Enter the quantity of staff :";
	    	cin>>staff;
	    	
	    	cout<<"Enter the quantity of room :";
	    	cin>>name;
	    	
	    	cout<<"Enter the Establish year :";
	    	cin>>year;
	    	
	    	cout<<"Enter the address :";
	    	cin>>add;
	    	
	    	cout<<"Enter the Ratings (3star,2star,5star..):";
	    	cin>>rat;
	    	
	    	cout<<"Enter the website :";
	    	cin>>web;
	    }
	    void getter(){
	    	cout<<endl<<"id :"<<id<<endl<<endl;
	    	
	    	cout<<"Hotel Name :"<<name<<endl<<endl;
	    	
	    	cout<<"Type :"<<typ<<endl<<endl;
	    	
	    	cout<<"Staff quantity :"<<add<<endl<<endl;
	    	
	    	cout<<"Room quantity :"<<room<<endl<<endl;
	    	
	    	cout<<"Establish year :"<<year<<endl<<endl;
	    	
	    	cout<<"Address :"<<add<<endl<<endl;
	    	
	    	cout<<"Ratings :"<<rat<<endl<<endl;
	    	
	    	cout<<"Website :"<<web<<endl<<endl;
		}
};
	    	
int main(){
	Hotel obj;
	
	obj.setter(203);
	obj.getter();
	
	return 0;
}	    	

            