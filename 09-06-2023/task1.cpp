#include<iostream>

using namespace std;

class Employee{
	private:
		int id,salary,num;
		char name[30],role[30],exp[30],add[100],email[100];
	public:
	    void setter(){
	    	cout<<"Enter id :";
	    	cin>>id;
	    	
	    	cout<<"Enter Name :";
	    	cin>>name;
	    	
	    	cout<<"Enter Role :";
	    	cin>>role;
	    	
	    	cout<<"Enter Salary :";
	    	cin>>salary;
	    	
	    	cout<<"Enter Experience :";
	    	cin>>exp;
	    	
	    	cout<<"Enter Address :";
	    	cin>>add;
	    	
	    	cout<<"Enter Email :";
	    	cin>>email;
	    	
	    	cout<<"Enter Contact  : 91";
	    	cin>>num;
		}
		void getter(){
			cout<<endl<<"Id :"<<id<<endl<<endl;
			
			cout<<"Name :"<<name<<endl<<endl;
			
			cout<<"Role :"<<role<<endl<<endl;
			
			cout<<"Salary :"<<salary<<endl<<endl;
			
			cout<<"Experience :"<<exp<<endl<<endl;
			
			cout<<"Address :"<<add<<endl<<endl;
			
			cout<<"Email :"<<email<<endl<<endl;
			
			cout<<"Contact : 91"<<num<<endl<<endl;
		}	
};

int main(){
	Employee obj;
	int i;
	
	for(i=0;i<=4;i++){
		obj.setter();
	}
	
	for(i=0;i<=4;i++){
		obj.getter();
	}
	
	
	
	
	
	return 0;
}