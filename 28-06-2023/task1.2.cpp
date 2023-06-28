#include<iostream>

using namespace std;

int main(){
	
	int age=17;
	
	try{
		if(age<=18){
			throw age;
		}
		else{
			cout<<"You Are Eligible for Vote !!";
		}
	}
	catch(...){
		cout<<"Your Are not Eligible for Vote =>Your Age"<<age;
	}
	
	return 0;
}