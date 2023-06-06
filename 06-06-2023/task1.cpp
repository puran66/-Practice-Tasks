#include<iostream>

using namespace std;

class data{
	
	private:
		int id;
		char name[50];
		int age;
		char course[50];
		char email[50];
		char city[30];
		char collage[100];
	
	public:
	   void setter(){
	      cout<<"Enter id :";
	      cin>>id;
	      
	      cout<<"Enter name :";
	      cin>>name;
	      
	      cout<<"Enter age :";
	      cin>>age;
	      
	      cout<<"Enter Course :";
	      cin>>course;
	      
	      cout<<"Enter email :";
	      cin>>email;
	      
	      cout<<"Enter city :";
	      cin>>city;
	      
	      cout<<"Enter Collage :";
	      cin>>collage;
	}
	   void getter(){
	   	    cout<<"id :"<<id<<endl;
			cout<<"name :"<<name<<endl;
			cout<<"course :"<<course<<endl; 
			cout<<"email :"<<email<<endl; 
			cout<<"city :"<<city<<endl; 
			cout<<"collage :"<<collage<<endl;
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