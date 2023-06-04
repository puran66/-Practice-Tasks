#include<iostream>
#include<string.h>

using namespace std;

class Employers{
	
	public:
		int Id;
		char CompanyName[10];
		int ReleaseYear;
	    char Model[10];
	    char Color[10];
	
};

int main(){
	Employers obj1,obj2,obj3,obj4;
	
	cout<<"Id=>";
	obj1.Id=1;
	cout<<obj1.Id;
	
	cout<<"\n CompanyName=>";
	strcpy(obj1.CompanyName," Bentley");
	cout<<obj1.CompanyName;
	
	cout<<"\n ReleaseYear=>";
	obj1.ReleaseYear=2000;
	cout<<obj1.ReleaseYear;
	
	cout<<"\n Model=>";
	strcpy(obj1.Model," Rolls-Royce");
	cout<<obj1.Model;
	
	cout<<"\n Color=>";
	strcpy(obj1.Color," White");
	cout<<obj1.Color;
	
	
	cout<<"\n\n\nId=>";
	obj2.Id=2;
	cout<<obj2.Id;
	
	cout<<"\n CompanyName=>";
	strcpy(obj1.CompanyName," Maserati");
	cout<<obj1.CompanyName;
	
	cout<<"\n ReleaseYear=>";
	obj1.ReleaseYear=2004;
	cout<<obj1.ReleaseYear;
	
	cout<<"\n Model=>";
	strcpy(obj1.Model," Maserati Ghibli");
	cout<<obj1.Model;
	
	cout<<"\n Color=>";
	strcpy(obj1.Color," White");
	cout<<obj1.Color;
	
	
	cout<<"\n\n\nId=>";
	obj1.Id=3;
	cout<<obj1.Id;
	
	cout<<"\n CompanyName=>";
	strcpy(obj1.CompanyName," Jaguar");
	cout<<obj1.CompanyName;
	
	cout<<"\n ReleaseYear=>";
	obj1.ReleaseYear=2003;
	cout<<obj1.ReleaseYear;
	
	cout<<"\n Model=>";
	strcpy(obj1.Model," I-Pace");
	cout<<obj1.Model;
	
	cout<<"\n Color=>";
	strcpy(obj1.Color," Black");
	cout<<obj1.Color;
	
	
	
	cout<<"\n\n\nId=>";
	obj4.Id=4;
	cout<<obj4.Id;
	
	cout<<"\n CompanyName=>";
	strcpy(obj1.CompanyName," Porsche");
	cout<<obj1.CompanyName;
	
	cout<<"\n ReleaseYear=>";
	obj1.ReleaseYear=2003;
	cout<<obj1.ReleaseYear;
	
	cout<<"\n Model=>";
	strcpy(obj1.Model," Porsche Cayenne");
	cout<<obj1.Model;
	
	cout<<"\n Color=>";
	strcpy(obj1.Color," White");
	cout<<obj1.Color;
	
	

	
	return 0;
}

