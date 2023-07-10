#include<iostream>
//using namespace std;
//default
class test{
	int a,b;
	public:
		test(){
			a=10;
			b=10;	
		}
	void getData(){
		std::cout<<"=== Via default constructor  ===";
		std::cout<<"\nValue of a is: "<< a;
		std::cout<<"\nValue of b is: "<< b;
	}
};

class testCon{
	int a,b;
	public:
		testCon(int x, int y){
			a = x;
			b = y;
		}
		void getData(){
			std::cout<<"\n=== Via parameterized constructor ====";
			std::cout<<"\nValue of a: "<<a;
			std::cout<<"\nValue of b: "<<b;
		}
};


int main(){
	test ob;
	ob.getData();//default constructor
	int a,b;
	std::cout<<"\n\nEnter value for a: ";
	std::cin>>a;
	std::cout<<"Enter value for b: ";
	std::cin>>b;
	testCon ob1(a,b);
	ob1.getData();
}
