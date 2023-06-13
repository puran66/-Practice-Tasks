#include<iostream>

using namespace std;

class Student{
	private:
		int id=203;
		
    public:
	    Student(){
	    	cout<<"your id is :"<<id;
		}		
};

int main(){
	
	Student obj;
	
	
	return 0;
}