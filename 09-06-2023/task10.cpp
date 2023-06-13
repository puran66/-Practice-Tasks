#include<iostream>

using namespace std;

class Railway{
	private:
		int num;
		char name[100];
        char source[30];
		char destination[100];
		char time[30];
		int a;
	public:
	    void setter(){
	    	cout<<"Enter your train Number :";
	    	cin>>num;
	    	
	    	cout<<"Enter your train Name :";
	    	cin>>name;
	    	
	    	cout<<"Enter your Source :";
	    	cin>>source;
	    	
	    	cout<<"Enter your destination :";
	    	cin>>destination;
	    	
	    	cout<<"Enter your train Time :";
	    	cin>>time;
	    	
	    	cout<<endl<<endl<<endl<<"Enter your train number :";
	    	cin>>a;
		}
		void getter(){
			if(a==num){
				cout<<endl<<endl<<"Your Train :"<<name<<endl<<endl;
				cout<<"Your destination is :"<<destination<<endl<<endl;
				cout<<"Your Time is :"<<time<<endl<<endl<<endl<<endl<<"Your Booking is Sucessfully Done .";
			}
			else{
				cout<<"Please Enter a valid number !";
			}
		}			
};
int main(){
	Railway obj;
	
	obj.setter();
	
	obj.getter();
	
	return 0;
}
