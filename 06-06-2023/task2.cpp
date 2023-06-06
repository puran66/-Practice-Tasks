#include<iostream>

using namespace std;

class data{
	private:
		int id;
		char name[30];
		int age;
		char brand[100];
		int num;
		char city[30];
		int validity;
		
	public:
	    void setter(){
	    	cout<<"Enter the id :";
	    	cin>>id;
	    	
	    	cout<<"Enter the name :";
	    	cin>>name;
	    	
	    	cout<<"Enter the age :";
	    	cin>>age;
	    	
	    	cout<<"Enter the telecome brand name :";
	    	cin>>brand;
	    	
	    	cout<<"Enter the number :";
	    	cin>>num;
	    	
	    	cout<<"Enter the city :";
	    	cin>>city;
	    	
	    	cout<<"Enter the validity :";
	    	cin>>validity;
		}
		void getter(){
			cout<<"id :"<<id<<endl<<endl;
			
			cout<<"Name :"<<name<<endl<<endl;
			
			cout<<"Age :"<<age<<endl<<endl;
			
			cout<<"Telecome company name  :"<<brand<<endl<<endl;
			
			cout<<"Number :"<<num<<endl<<endl;
			
			cout<<"City :"<<city<<endl<<endl;
			
			cout<<"Validity :"<<validity<<endl<<endl;
	}
};

int main(){
	 data obj1,obj2,obj3,obj4,obj5;
	 
	 obj1.setter();
	 obj2.setter();
	 obj3.setter();
	 obj4.setter();
	 obj5.setter();
	
	
	obj1.getter();
	obj2.getter();
	obj3.getter();
	obj4.getter();
	obj5.getter();
	
	
	
	
	
	return 0;
}