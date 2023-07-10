//find repeated values in an array
#include <stdio.h>         
int main()    
{    
    //Initialize array     
    int arr[] = {1, 2, 0};     
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
    
    printf("Duplicate elements in given array: \n");   
    //Searches for duplicate element    
    int count =0;
    for(int i = 0; i < length; i++) {    
        for(int j = i + 1; j < length; j++) {    
            if(arr[i] == arr[j]) {
                printf(" %d\n", arr[j]);   
				count++; 
			}
        }    
    } 
    if(count==0){
    	   printf("No duplicate elements found. \n");  
	}
    
}  