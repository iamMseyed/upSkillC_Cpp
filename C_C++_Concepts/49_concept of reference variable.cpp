//concept of reference variable
#include<iostream>

using namespace std;

int main(){
	int a=10;
	int &ref = a; // either int& or int &refVar. will point to same address
	int& b= a; //will point to same address like ref 
	
	cout<< a <<" " <<b <<" " <<ref <<" "<< &ref <<" "<<&b; //reference variable is like the alias of the refrenced variable. 
	
}
