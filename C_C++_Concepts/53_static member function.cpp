#include<iostream>

using namespace std; 

class test{
	int a;
	static int count;
	public:
		void setA(int);
		void static displayStatic();	
		void displayAll();	
};

void test::setA(int x){
	cout<<"\n***Object "<<count+1 <<" created***";
	a = x;
	count++; 
}

void test::displayStatic(){ //no need to mention static here, only in method declaration is enough
//	 cout<<"Checking value from static function of non-static variable is: "<<a; //can't access non-static member -- ERROR
	 cout<<"\nCan't access not static variable via static function!";
	 cout<<"\nStatic variable initilized to: "<<count;
}

void test::displayAll(){
	cout<<"\nValue of non-static variable is: "<<a; 
	cout<<"\nValue of static variable initilized to : "<<count <<"\n\n";
}
int test::count; // static data member needs to be declared outside //  Else this error will be thrown: [Error] ld returned 1 exit status

int main(){
	int a;
	cout<<"Enter value for non-static varaible b: ";
	cin>>a;
	
	test ob1, ob2, ob3;
	
	//for ist obj
	ob1.setA(a);
	
	cout<<"\n==== Checking via static function ====";
	test::displayStatic();
	
	cout<<"\n\n==== Checking via non-static function ====";
	ob1.displayAll();

	//for 2nd obj
	ob2.setA(a);
	cout<<"\n==== Checking via static function ====";
	test::displayStatic();
	
	cout<<"\n\n==== Checking via non-static function ====";
	ob2.displayAll();	
	
	//for 3rd obj
	ob3.setA(a);
	cout<<"\n==== Checking via static function ====";
	test::displayStatic();
	
	cout<<"\n\n==== Checking via non-static function ====";
	ob3.displayAll();
	
}
