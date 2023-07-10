#include<stdio.h>
#include<conio.h>

int main() { 
	int s1, s2,i;
	
	printf("Enter array1 size: ");
	scanf("%d",&s1);
	
	printf("Enter array2 size: ");
	scanf("%d",&s2);
	
	int arr1[s1], arr2[s2];
	
	for(i = 0; i<s1;i++){
		printf("Enter element to array 1 at %d: ",i);
		scanf("%d",&arr1[i]);
	}
	printf("\n");
		for(i = 0; i<s2;i++){
		printf("Enter element to array 2 at %d: ",i);
		scanf("%d",&arr2[i]);
	}

    printf("Array 1 elements are:\n");
    for(i = 0; i<s1;i++){
		printf("%d\n",arr1[i]);
	}
	
	printf("Array 2 elements are:\n");
    for(i = 0; i<s2;i++){
		printf("%d\n",arr2[i]);
	}
	int total=s1+s2, merged[total];

	//now merging 2 arrays:
	
	
    return 0;
}
