#include<iostream>

using namespace std;

class Math{
	public:
		void Calculator(int a,int b){
			cout<<"Division :"<<a/b<<endl;
		}
		void Calculator(int a,int b,int c){
			cout<<"Subtraction :"<<a-b-c<<endl;
		}
		void Calculator(int a,int b,int c,int d){
			cout<<"Multiplication :"<<a*b*c*d<<endl;
		}
		void Calculator(int a,int b,int c,int d,int e){
			cout<<"Addition :"<<a+b+c+d+e<<endl;
		}
};
int main(){
	Math obj;
	
	obj.Calculator(100,10);
	obj.Calculator(23,35,63);
	obj.Calculator(13,12,11,10);
	obj.Calculator(30,31,32,33,34);
	
	
	return 0;
}