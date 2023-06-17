#include<iostream>

using namespace std;

class Mother{
	public:
	void display(){
		cout<<"Name : Mother "<<endl;
		cout<<"Age : 45 "<<endl;
	}
};
class Daughter : public Mother{
	public:
	void display(){
		
		cout<<"Name : Daugther "<<endl;
		cout<<"Age : 19 ";
	}
};
int main(){
	Daughter obj;
	
	obj.Mother::display();
	
	obj.display();
	
	
	return 0;
}

