#include<iostream>

using namespace std;

class Number{
	public:
		int a;
		void get(){
			cout<<"Enter the Number :";
			cin>>a;
		}
};
class Square :public Number{
	public:
		void getter(){
			cout<<"Suqare =>"<<a*a<<endl;
		}
};
class Cube :public Number{
	public:
		void getter(){
			cout<<"Cube =>"<<a*a*a<<endl;
		}
};
int main(){
	Square obj;
	Cube obj1;
	
	cout<<"For Suqare"<<endl;
    obj.get();
    obj.getter();
    
    cout<<"For Cube"<<endl;
	obj1.get();
	obj1.getter();
	
	return 0;
}
