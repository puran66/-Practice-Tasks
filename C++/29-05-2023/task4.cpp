#include<iostream>

using namespace std;

int sqaureroot(int n){
	int i=1,result=1;
	
	while(result<=n){
		i++;
		result= i*i;
	}
	return i-1;
	
}

int main(){
	int a;
	
	cout<<"Enter the value :";
	cin>>a;
	
	cout<<sqaureroot(a);
	
	
	return 0;
}