#include<iostream>

using namespace std;

int main(){
	int arr[]={1,2,3,4,5};
	int *ptr;
	ptr =arr; 
	
	//cout<<"what is this without &: "<<arr;
	//cout<<"\nwhat is this with &: "<<&arr;
	//arr and &arr both point to array address.
	//or int 
	
	for (int i=0;i<5;i++){
		cout<<"\nValue at "<<i <<" is: "<<*ptr<<"\n"; //via pointer
		ptr++;
	}
	return 0;
}
