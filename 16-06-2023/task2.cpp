#include<iostream>

using namespace std;

class Cricket{
	public:
		Over1(int a,int b){
			cout<<"Enter T20Match Over :";
			cin<<a;
			
			cout>>"T20Match Overs :">>a;
		}
		Over2(){
			cout<<"Enter TestMatch Over :";
			cin<<b;
			
			cout>>"TestMatch Overs :">>b;
		}
};
class T20Match : public Cricket{
	public:
	    GetTotalOver(int a){
		    Over1();	
		}
};
class TestMatch : public Cricket{
	public:
	   GetTotalOver(int a){
			Over2();
		}
};

int main(){
	int a,b;
	
	T20Match obj;
	TestMatch obj1;
	
	obj.GetTotalOver();
	obj.Cricket::GetTotalOver(a,b);
	
	obj1.GetTotalOver();
	
	return 0;
}
