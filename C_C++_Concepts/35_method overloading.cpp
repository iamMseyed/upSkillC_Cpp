#include<iostream>
using namespace std;

int sum(int a, int b){
	return a+b;
}

int sum(int a, int b, int c){
	return a+b+c;
}
int main(){
	int a, b,c,res;
	cout<< "Enter num-1, num-2 and num-3: \n";
	cin>>a>>b>>c;
	
	cout<<"Sumation of num-1 and num-2 is: "<< sum(a,b);
	cout<<"\nSumation of num-1, num-2 and num-3 is: "<< sum(a,b,c);
}