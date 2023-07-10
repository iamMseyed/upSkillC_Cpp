#include<iostream>
using namespace std;

int main(){
	int *ptr = new int;
	printf("hello1");
	delete ptr;
	cout << "hello2";
	delete ptr;
	cout << "hello3";
	return 0;
}