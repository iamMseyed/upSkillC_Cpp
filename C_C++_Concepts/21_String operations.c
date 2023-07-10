#include<stdio.h>
#include<conio.h>
#include<string.h>


int main(){	
	int size;
	printf("Enter size of the string array: ");
	scanf("%d",&size);
	
	char str[size];
	char temp;
	printf("Enter the string: ");
	scanf("%c",&temp);//to clear buffer
	fgets(str, size+1,stdin) ;  //this takes only the string with the given length, no buffere overflow issues
	
	//printf("\nLength of string is %d",strlen(str)); //to check for length of the string

	/*Here two things are important:                
     1: %chough this will serve the purpose, but is time consuming and take more memory. We didn't also
     used %s because if we do, it will take string values upto space found. Thus we used %[^\n], until 
     enter is pressed, take all the string characters.
     
     2:In scanf() we use '&' to enter the value at the given address, but here str is of arr and it points
     to first value of str which is str[0] by default, so no need to use '&'.
		
	*/
    printf("\nString is: %s", str);
	


	/* Other ways to take valus to string array, but the first takes spaces in arrays and works with user-defined size of array
	while(string[i]!='\0'){
		printf("\nvalue at %d is %c",i, string[i]);
		i++;
	}  
			//OR

	printf("string is: ");	
	while(string[i]!='\0'){
		printf("%c", string[i]);
		i++;
	}

	int len = strlen(string);
	printf("\nLenth of string via strlen() is %d",len);
	
	*/

	return 0;
}