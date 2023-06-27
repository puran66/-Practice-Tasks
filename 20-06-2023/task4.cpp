#include<iostream>

using namespace std;

class Add{
	private:
		int a;
	public:
	    void set(int p){
	    	a=p;
		}
		void get(){
			cout<<a<<endl;
		}
		Add operator ++(){
			Add plus;
			
			plus.a=++a;
			
			return plus;
		}
		Add operator --(){
			Add plus;
			
			plus.a=--a;
			
			return plus;
		}
			
};
int main(){
	Add obj,obj1,obj2;
	
	obj.set(20);
	
	cout<<"Your entered value :";
	obj.get();
	
	obj1= ++obj;
	cout<<"After (++)operator overloading value :";
	obj1.get();
	
	cout<<"After (--)operator overloading value :";
	obj2= --obj1;
	obj2.get();
	
	return 0;
}