#include<iostream>
#include<string.h>

using namespace std;

class Game{
	
	public:
	   char UserId[10];
	   int Uc=3000;  
	private:
	  char Password[10]; 
};

int main(){
	
	Game obj;
	
	cout<<"UserId=>";
	
	strcpy(obj.UserId,"maxpuran");
	cout<<obj.UserId;
	
	cout<<"\nUc=>";
	
	cout<<obj.Uc;
	
	
	
	
	return 0;
}