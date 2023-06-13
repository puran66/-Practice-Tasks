#include<iostream>

using namespace std;

class Bank{
	private:
		char name[100];
	public:
		Bank(int b){
			cout<<"Enter your Name :";
			cin>>name;
			
			cout<<"Your Availible Balance is :"<<b;
		}
};

int main(){
	
	Bank obj(2000000);
	
	return 0;
}