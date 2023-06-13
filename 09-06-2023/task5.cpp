#include<iostream>

using namespace std;

class India{
	private:
		static char stat1[50];
		static char stat2[50];
		static char stat3[50];
		static char stat4[50];
		static char stat5[50];
		static char stat6[50];
		static char stat7[50];
		static char stat8[50];
		static char stat9[50];
		static char stat10[50];
		static char stat11[50];
		static char stat12[50];
		static char stat13[50];
		static char stat14[50];
		static char stat15[50];
		static char stat16[50];
		static char stat17[50];
		
	public:
		void getter(){
		cout<<"All states of India :";
		
		cout<<endl<<stat1<<endl;
		cout<<stat2<<endl;
		cout<<stat3<<endl;
		cout<<stat4<<endl;
		cout<<stat5<<endl;
		cout<<stat6<<endl;
		cout<<stat7<<endl;
		cout<<stat8<<endl;
		cout<<stat9<<endl;
		cout<<stat10<<endl;
		cout<<stat11<<endl;
		cout<<stat12<<endl;
		cout<<stat13<<endl;
		cout<<stat14<<endl;
		cout<<stat15<<endl;
    }
    static void box(){
    	cout<<stat16<<endl;
    	cout<<stat17<<endl;
	}
};
char India :: stat1[]="Rajasthan";
char India :: stat2[]="Goa";
char India :: stat3[]="Uttarakhand";
char India :: stat4[]="Himachal Pradesh";
char India :: stat5[]="Sikkim";
char India :: stat6[]="Nagaland";
char India :: stat7[]="Maharashtra";
char India :: stat8[]="Bihar";
char India :: stat9[]="Karnataka";
char India :: stat10[]="Gujarat";
char India :: stat11[]="Tamil Nadu";
char India :: stat12[]="Jharkhand";
char India :: stat13[]="West Bengal";
char India :: stat14[]="Assam";
char India :: stat15[]="Andhra Pradesh";
char India :: stat16[]="Tripura";
char India :: stat17[]="Puducherry";

int main(){
	India obj;
	
	obj.getter();
	
    India::box();
	
	
	return 0;
}