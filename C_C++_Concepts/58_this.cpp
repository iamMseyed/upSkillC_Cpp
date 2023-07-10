/*
	this: represents current object. It holds address of current object for non static 
	member functions and not in friend functions as friend function is not a class member 
*/
#include<iostream>
using namespace std;

//class useOfThis{
//	int a;
//	public:
//		void setA(int a){
//			this->a=a;
//		}
//		void getA(){
//			cout<<"Value of a via 'this' is : "<<this->a;
//			cout<<"\nValue of a via simply printing (internally uses 'this') : "<<a;
//		}		
//};
//int main(){
//	useOfThis obj;
//	int a;
//	cout<<"Enter a value: ";
//	cin>>a;
//	
//	obj.setA(a);
//	obj.getA();
//}

class Max{
	int no;
	public:
		Max(int no=0){ //default argument
			this->no=no;
//			cout<<"\nobject intilized";
		}
		Max &greater(Max &x) //x is obj2 
		//or Max& greater(Max &x)
		{ //argument and return type of this function both are object reference
		
				if(x.no >no) //obj2.no > no (no is by which it was called, so is obj1)
					return x; //returns reference variable x itself
				else 
					return *this; //when obj1's no. value is > then the called obj2's no., it will return the object itself. This here refers to by which it is called
		}
		void display(){
			cout<<"\nGreater value is: "<<no; //print no. simply
		}
};

int main(){
	int n1,n2;
	cout<<"Enter any two numbers: \n";
	cin>>n1>>n2;
	
	Max obj1(n1),obj2(n2),obj3; //till now obj1's, obj2's and obj3's values have been initilized, 
	obj3= obj1.greater(obj2); //here calling greater() via obj1 and passing obj2 to it, remember it returns obj itself thus storing in obj3
	obj3.display();
}


