#include<iostream>

using namespace std;

class data{
	private:
		int id;
		char name[30];
		char typ[30];
		char rat[30];
		static char loc[10];
		int year;
		int staff;
		int room;
	public:
	    void setter(){
	    	cout<<"Enter id :";
	    	cin>>id;
	    	
	    	cout<<"Enter Name :";
	    	cin>>name;
	    	
	    	cout<<"Enter type :";
	    	cin>>typ;
	    	
	    	cout<<"Enter rating :";
	    	cin>>rat;
	    	
	    	cout<<"Enter Establish year :";
	    	cin>>year;
	    	
	    	cout<<"Enter Staff quantity :";
	    	cin>>staff;
	    	
	    	cout<<"Enter Room quantity :";
	    	cin>>room;
	    	
		}
		void getter(){
			cout<<"Id :"<<id<<endl<<endl;
			
			cout<<"Name :"<<name<<endl<<endl;
			
			cout<<"Type :"<<typ<<endl<<endl;
			
			cout<<"Ratings :"<<rat<<endl<<endl;
			
			cout<<"Establish year :"<<year<<endl<<endl;
			
			cout<<"Staff quantity :"<<staff<<endl<<endl;
			
			cout<<"Room quantity :"<<room<<endl<<endl;
		}	
};
char data :: loc[]="Surat";

int main(){
	data obj[5];
	int i;
	
	for(i=0;i<=4;i++){
		obj[i].setter();
	}
	
	for(i=0;i<=4;i++){
		obj[i].getter();
	}
	
	
	
	return 0;
}