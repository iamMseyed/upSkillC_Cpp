#include<iostream>

using namespace std;
class base{
	protected:
		int a;
	public:
		void setA(int x){
			a= x;
		}
		void display(){
			cout<<"\nVia base class value of a is: "<<a;
		}
};

class derived: public base{
	int b;
	public:
		void setB(int y){
			b = y;
		}
		void display(){
			cout<<"\nVia derived class, value of a and b is: "<<a <<" "<<b;
//			base::display(); //calling base's dispaly() 
		}
};

int main(){
	
	int a,b;
	cout<<"Enter value for a and b:\n";
	cin>>a>>b; 
	
	
	derived *objPtrD; //derived class pointer is used to point derived class
	derived objD;
	objPtrD = &objD;
	objPtrD->setA(a);
	objPtrD->setB(b); 
	objPtrD->display(); //calling derived class display()
	
	base *objPtrB; //creating base class pointer
	base objB; //creating base class obj
	objPtrB = &objD; //base class pointer pointing to derived class also
	objPtrB->setA(a);
//	objPtrB->setB(b); //error no memeber function of setB() though it points to derived class
	((derived*)objPtrB)->setB(b); //this will solve the above error, by typecasting we can acces derived class's methods by base class pointer
		
	objPtrB->display(); //calling base's display()
	((derived*)objPtrB)->display(); // will call derived class's display via base class pointer variable
	
}
