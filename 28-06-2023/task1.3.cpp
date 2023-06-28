#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	char password[9];
	int i;
	
	cout<<"Enter Your Password =>";
	cin>>password;
	
	try{
		for(i=0;i<8;i++){
			if(password[i]>='A' && password[i]<='Z'){
				throw password;
			}
		}
	    cout<<"Your Password is NOT Valid !";
	}
				
	catch(char n[]){
		cout<<"Your password is valid ";
	}
	
	return 0;
}