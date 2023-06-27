#include<iostream>
#include<string.h>

using namespace std;

class Message{
	private:
		char name[30];
	public:
		Message(char a[]){
			strcpy(name,a);
		}
	void print(){
		cout<<"Your Name :";
	}
	void print(char lastname[]){
		cout<<name<<" "<<lastname<<endl;
	}	
};
int main(){
	
	Message obj("John");
	
	obj.print();
	obj.print("Weak");
	
	return 0;
}

