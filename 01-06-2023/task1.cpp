#include<iostream>
//#include<string.h>

using namespace std;

class Home{
	public:
		char Name[10];
		int Number;
		char Type[10];
		
};

int main(){
	Home obj;
	
	strcpy(obj.Name,"RowHouse");
	cout<<obj.Name;
	cout<<"\n";
	
	strcpy(obj.Type,"3Bhk");
	cout<<obj.Type;
	cout<<"\n";
	
	obj.Number=204;
	cout<<obj.Number;
	
	
	return 0;
}
