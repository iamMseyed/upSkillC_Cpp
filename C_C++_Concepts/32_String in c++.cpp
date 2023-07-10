#include<iostream>
#include<cstring> //to get functions for working with c type of strings
using namespace std;

int main(){
	
	/*static string, C language based
	char str[] ="C++"; 
	char str1[7] = "Python"; 
	/*basic string, storing with null character too. If you code: char st[1] ="hello";//this will throw error
	This is because, st is of length 1 and we are storing 5 length. Also if we code: char st[3]="hey" //this
	still will throw error because we need to accomidate '\0'-> null character too. So length +1 it is. 

	cout<< "String is : "<<str;
	cout<< "\nString1 is : "<<str1;
	*/
	
	//dynamic string, C language based

	/*
		char str[20];
		cout<<"Enter string: ";
		cin.get(str,20);
		
		cout<<"Str is: "<<str;
	*/
	
	//via c++ string, string is class and this class contain  functions
/*	
	string str; //should be in lower case
	cout<<"Enter your string:";
	//cin>>str; //takes till space found
	getline(cin,str);//takes whole string untill enter key is found
	cout<<"String is: "<<str; 
*/
	string str = "Hey ";  //you can have space after
	string str1= " Hello"; //you can have space before
	str = str+str1; //for string initiated with c++ type of strings
	
	char s1[10]="Bhai "; //you can have space after
	char s2[10]= "wala yoer"; //you can't have space after in c type of strings
	strcat(s1,s2);//for strings initiated with c type of strings
	cout<<"String concatination via simple + is:"<<s1;
	return 0;
}