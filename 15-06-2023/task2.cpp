#include<iostream>

using namespace std;

class Mother{
	private:
	    char name[100];
		int age;	
	public:
	void set_value(){
	    cout<<"Enter the Mother Name :";
		cin>>name;
		
		cout<<"Enter the Mother Age :";
		cin>>age;
		
		cout<<"Mother Name :"<<name<<endl;
		cout<<"Mother Age :"<<age<<endl;
	}	
};
class Zebra : public Mother{
    public:
	    void get_value(){
	    	cout<<"\tInformation Of Zebra "<<endl<<endl;
	    	
	   		set_value();
	   		
	   		cout<<"Name : Zebra "<<endl;
	   		cout<<"Age : 19year "<<endl;
	   		cout<<"Place Of orgin : Africa"<<endl;
		}
};
class Dolphin : public Mother{
	public:
		void get_value(){
			cout<<"\tInformation Of Dolphin :"<<endl<<endl;
			
	   		set_value();
	   		
	   		cout<<"Name : Dolphin "<<endl;
	   		cout<<"Age : 9year "<<endl;
	   		cout<<"Place Of orgin : South Asia"<<endl;
		}
};

int main(){
	Zebra obj;
	Dolphin obj1;
	
	obj.get_value();
	
	obj.get_value();
	
	return 0;
}
