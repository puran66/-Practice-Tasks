#include<iostream>

using namespace std;

class Student2{
	public:
		void data(int a,int b){
			cout<<"Student2 Id =>"<<a<<endl;
			cout<<"Student2 Fee =>"<<b<<endl;
		}
};
class Student1: public Student2{
	public:
		void data(int a,int b){
			cout<<"Student1 Id =>"<<a<<endl;
			cout<<"Student1 Fee =>"<<b<<endl;
		}
};
int main(){
	Student1 obj;
	
	obj.data(202,17000);
	obj.Student2::data(203,18000);
	
	return 0;
}