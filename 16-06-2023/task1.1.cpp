#include<iostream>

using namespace std;

class Cricket{
	public:
		GetTotalOver(int a){
			cout<<"Overs in Cricket :"<<a<<endl;
		}
};
class T20Match : public Cricket{
	public:
	    GetTotalOver(int a){
		    cout<<"Overs in T20Match :"<<a<<endl;	
		}
};
class TestMatch : public Cricket{
	public:
	   GetTotalOver(int a){
			cout<<"Overs in TestMatch :"<<a<<endl;
		}
};

int main(){
	T20Match obj;
	TestMatch obj1;
	
	obj.GetTotalOver(20);
	obj.Cricket::GetTotalOver(50);
	
	obj1.GetTotalOver(50);
	
	return 0;
}
