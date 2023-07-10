//Dynamic memory allocation

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int size,*ptr,sum=0,i,*p;
	printf("Enter array size: ");
	scanf("%d",&size);
	
	ptr = (int*)malloc(size*sizeof(int));  //one memory block of required size (user size * size of datatype   )
	
	if(ptr==NULL){
		printf("Some weired error occured, memory not created! Exiting.....");
		exit(0);
	}
	/*
		here is dynamic memory allocation, actually malloc return type is void pointer which simply says
		that any data type can take the value, we just need to cast to that data type. Here we are casting
		to int variable. In the malloc argument list we need to specify the size, as we are working with
		int data type, we multiply size (what user wants) with the int data type size. So, if user wants
		to create array of 5, in total, 10bytes of memory will be created by malloc function.
	*/
	printf("\nFrom this address: %p, memory has been allocated",ptr);
	p=ptr;
	printf("\n====Enter the elements: ====\n");
	for(i=0; i<size;i++){
		printf("Enter element at %d: with address %p: ",i+1,ptr);
		scanf("%d",ptr)	;// no need to use '&' as ptr itself is address
		sum = sum + *ptr;
		ptr++;
	}
	
	printf("==== The array elements are ====");
	for(i = 0;i<size;i++){
		printf("\nElement at %d is %d with address: %p ",i+1, *p,p);
		p++;
	}
	printf("\nSummation of array elements : %d",sum);

}