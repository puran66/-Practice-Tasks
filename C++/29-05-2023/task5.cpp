#include<iostream>

using namespace std;


int main(){
	int a[5];
	int i;
	
	cout<<"Enter elements ";
	cout<<"\n";
	
	for(i=0;i<5;i++){
		cout<<"Enter the value :";
		cin>>a[i];
	}
	for(i=0;i<5;i++){
		a[i]=a[i]*a[i]*a[i];
		cout<<"\n";
		cout<<a[i];
	}
	
	
	return 0;
}