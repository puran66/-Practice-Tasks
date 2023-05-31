#include<iostream>


using namespace std;

int main(){
	char a;
	
	cout<<"Enter the charcter :";
	cin>>a;
	
	if(a=='a' ||a=='e' ||a=='o' ||a=='u' ||a=='i' ){
		cout<<"the charcter is vowel !";
	}
	else if(a=='A' ||a=='E' ||a=='O' ||a=='U' ||a=='I' ){
		cout<<"the charcter is vowel !";
	}
	else{
		cout<<"the charcter is consonant !";
	}
	
	return 0;
}