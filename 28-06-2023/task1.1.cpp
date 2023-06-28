#include<iostream>

using namespace std;

int main(){
	
	int a=10;
	int b=0;
	char error[30]="Cannot divide by zero !";
	
	try{
		if(b==0){
			throw error;
		}
		else{
			cout<<"The Ans =>"<<a/b<<endl;
		}
	}
	catch(char n[]){
		cout<<error;
	}
	
	return 0;
}