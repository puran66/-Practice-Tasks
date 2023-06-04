#include<iostream>
#include<string.h>

using namespace std;

class Employers{
	
	public:
		int Id;
		char Name[10];
		char Role[10];
		int Age;
	    int Salary;
	    int Experience;
	    char City[10];
	    char CompanyName[100];
	
};

int main(){
	Employers obj1,obj2,obj3,obj4,obj5;
	
	cout<<"Id=>";
	obj1.Id=1;
	cout<<obj1.Id;
	
	cout<<"\n Name=>";
	strcpy(obj1.Name," Rahul");
	cout<<obj1.Name;
	
	cout<<"\n Role=>";
	strcpy(obj1.Role," Manager");
	cout<<obj1.Role;
	
	cout<<"\n Age=>";
	obj1.Age=29;
	cout<<obj1.Age;
	
	cout<<"\n Salary=>";
	obj1.Salary=200000;
	cout<<obj1.Salary;
	
	cout<<"\n Experience=>";
	obj1.Experience=10;
	cout<<obj1.Experience;
	
	cout<<"\n City=>";
	strcpy(obj1.City," Surat");
	cout<<obj1.City;
	
	cout<<"\n CompanyName=>";
	strcpy(obj1.CompanyName," Red&White");
	cout<<obj1.CompanyName;
	
	
	cout<<"\n\n\nId=>";
	obj2.Id=2;
	cout<<obj2.Id;
	
	cout<<"\n Name=>";
	strcpy(obj2.Name," Krishna");
	cout<<obj2.Name;
	
	cout<<"\n Role=>";
	strcpy(obj2.Role," Web Devloper");
	cout<<obj2.Role;
	
	cout<<"\n Age=>";
	obj2.Age=21;
	cout<<obj2.Age;
	
	cout<<"\n Salary=>";
	obj2.Salary=80000;
	cout<<obj2.Salary;
	
	cout<<"\n Experience=>";
	obj2.Experience=6;
	cout<<obj2.Experience;
	
	cout<<"\n City=>";
	strcpy(obj2.City," Surat");
	cout<<obj2.City;
	
	cout<<"\n CompanyName=>";
	strcpy(obj2.CompanyName," Red&White");
	cout<<obj2.CompanyName;
	
	
	cout<<"\n\n\nId=>";
	obj1.Id=3;
	cout<<obj1.Id;
	
	cout<<"\n Name=>";
	strcpy(obj1.Name," Sachin");
	cout<<obj1.Name;
	
	cout<<"\n Role=>";
	strcpy(obj3.Role," Web Devloper");
	cout<<obj3.Role;
	
	cout<<"\n Age=>";
	obj1.Age=20;
	cout<<obj3.Age;
	
	cout<<"\n Salary=>";
	obj3.Salary=70000;
	cout<<obj3.Salary;
	
	cout<<"\n Experience=>";
	obj3.Experience=5;
	cout<<obj3.Experience;
	
	cout<<"\n City=>";
	strcpy(obj3.City," Surat");
	cout<<obj3.City;
	
	cout<<"\n CompanyName=>";
	strcpy(obj3.CompanyName," Red&White");
	cout<<obj3.CompanyName;
	
	
	
	cout<<"\n\n\nId=>";
	obj4.Id=4;
	cout<<obj4.Id;
	
	cout<<"\n Name=>";
	strcpy(obj4.Name," Rahul");
	cout<<obj4.Name;
	
	cout<<"\n Role=>";
	strcpy(obj4.Role," Manager");
	cout<<obj4.Role;
	
	cout<<"\n Age=>";
	obj4.Age=20;
	cout<<obj4.Age;
	
	cout<<"\n Salary=>";
	obj4.Salary=60000;
	cout<<obj4.Salary;
	
	cout<<"\n Experience=>";
	obj4.Experience=4;
	cout<<obj4.Experience;
	
	cout<<"\n City=>";
	strcpy(obj4.City," Surat");
	cout<<obj4.City;
	
	cout<<"\n CompanyName=>";
	strcpy(obj4.CompanyName," Red&White");
	cout<<obj4.CompanyName;
	
	
	
	cout<<"\n\n\nId=>";
	obj5.Id=5;
	cout<<obj5.Id;
	
	cout<<"\n Name=>";
	strcpy(obj5.Name," Jaydip");
	cout<<obj5.Name;
	
	cout<<"\n Role=>";
	strcpy(obj5.Role," Ux Designer");
	cout<<obj5.Role;
	
	cout<<"\n Age=>";
	obj5.Age=19;
	cout<<obj5.Age;
	
	cout<<"\n Salary=>";
	obj5.Salary=50000;
	cout<<obj5.Salary;
	
	cout<<"\n Experience=>";
	obj5.Experience=4;
	cout<<obj5.Experience;
	
	cout<<"\n City=>";
	strcpy(obj5.City," Surat");
	cout<<obj5.City;
	
	cout<<"\n CompanyName=>";
	strcpy(obj5.CompanyName," Red&White");
	cout<<obj5.CompanyName;
	
	return 0;
}
