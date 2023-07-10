#include<stdio.h>
#include<stdlib.h>

int main(){
	int size,*ptr,*p,i;
	printf("Enter array size: ");
	scanf("%d",&size);
	ptr = (int*) calloc(size, sizeof(int)); //equall number of blocks, each of size what int is asssigned by complier
	
	p = ptr; //to hold the address.
	
	printf("====Enter array elements====\n");
	for(i=0;i<size;i++){
		printf("Enter element at %d: ",i);
		scanf("%d",ptr); //ptr is address so no need to use '&'
		ptr++; //will move to next address
	}
	
	printf("====Array elements are====");
	for(i=0;i<size;i++){
		printf("\nArray element at %d is %d",i,*p);
		p++; //will move to next address
	}
	
	free(p);
	free(ptr);
//	return 0;
	
}