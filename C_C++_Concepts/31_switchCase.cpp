#include<iostream>
using namespace std;

int main(){
	int a;
	cout << "Enter any value from 1-5:";
	cin>> a;
	
	switch(a){
		case 1:
			cout<<"Value 1 it is!";
			break;
		case 2:
			cout<<"Value 2 it is!";
			break;
		case 3:
			cout<<"Value 3 it is!";
			break;
		case 4:
			cout<<"Value 4 it is!";	
			break;
		case 5:
			cout<<"Value 5 it is!";
			break;
		default:
			cout<<"you should enter value from 1-5 only.";
	}
	
	return 0;
}