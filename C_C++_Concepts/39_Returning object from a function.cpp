#include<iostream>
using namespace std;

class one{
	int a;
	int b; 
	//private data variables
	public:
		void setData(int x, int y){
			a = x;
			b = y; 
		} //public member function to set data via user
		void getData(){
			cout<<"\nvalue of a is: "<<a;
			cout<<"\nValue of b is: "<<b;
		} //public member function to get private data 
		one performOp(one ob1, one ob2){
			one ob3;
			ob3.a = ob1.a+ob2.a;
			ob3.b = ob1.b+ob2.b;
			return ob3; 
		} //public member function, returns object and accepts object as parameter
};

int main(){
	one o1,o2,o3; //creating objects of classes mentioned
	int a,b,c,d;
	cout<<"Enter value for obj-1==";
	cout<<"\nfor a: ";
	cin>>a;
	cout<<"for b: ";
	cin>>b;	 //getting data from user
	
	cout<<"\nEnter value for obj-2==";
	cout<<"\nfor c: ";
	cin>>c;
	cout<<"for d: ";
	cin>>d;	 //getting data from user

	o1.setData(a,b); //calling public member funtion to set data
	o2.setData(c,d); //same here
	
	o1.getData(); //calling public member function to get the private data (via public member function)
	o2.getData();
	
	o3 = o3.performOp(o1,o2); //calling member function which takes argument as objects and returns object itself
	o3.getData(); //getting values of new obj, which we set be adding previous two objects
}
