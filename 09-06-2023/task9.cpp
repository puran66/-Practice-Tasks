#include<iostream>

using namespace std;

class School{
	private:
     	int roll;
     	char name[100];
    public:
	    void setter(){
	    	cout<<"Enter your Roll Number : ";
	    	cin>>roll;
	    	
	    	cout<<"Enter your name :";
	    	cin>>name;
		} 	
		void getter(){
			cout<<"Roll :"<<roll<<endl<<endl;
			cout<<"Student Name :"<<name<<endl<<endl;
		}
};
int main(){
	School obj;
    int i;
    
    for(i=0;i<=4;i++){
         obj.setter();
	}
	for(i=0;i<=4;i++){
    	obj.getter();
	}
	
	return 0;
}
