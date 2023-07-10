#include<iostream>

using namespace std;

class hello{
	static int count;
	public:
		hello(){
			count++;
			cout<<count <<"-object created.";
		}
		~hello(){
			cout<<count<<"-object destroyed";
			count--;
		}
};

int main(){
	cout<<"From main function.";
	hello ob; //object created
	{
		cout<<"Via block.";
		hello ob2,ob3;
		cout<<"Exit from block...";
		//when comming out of block or program object will be destroyed automatically
	}
	
	cout<<"Exit from main..";
	return 0;
}