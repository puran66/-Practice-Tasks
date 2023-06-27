#include<iostream>

using namespace std;

class Data{
	public:
		Member(){
			cout<<"The value is : 0"<<endl;
		}
		Member(int a){
			cout<<"The value is :"<<a<<endl;
		}
		Member(int a,int b){
			cout<<"The value is :"<<a<<","<<b<<endl;
		}
		Member(int a,int b,int c){
			cout<<"The value is :"<<a<<","<<b<<","<<c<<endl;
		}
};
int main(){
	Data obj;
	
	obj.Member();
	obj.Member(12);
	obj.Member(24,36);
	obj.Member(48,60,72);
	
	return 0;
}