#include <stdio.h>

#include <stdio.h>

void merge(int* arr1, int* arr2, int size1, int size2, int* merged) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < size2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
}


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

//    merge(arr1, arr2, n, m);
    printf("Array 1 elements are:\n");
    for(i = 0; i<s1;i++){
		printf("%d\n",arr1[i]);
	}
	
	printf("Array 2 elements are:\n");
    for(i = 0; i<s2;i++){
		printf("%d\n",arr2[i]);
	}
	//tilll now two arrays are  initilized 
	
	//creating new array to store merged array
	
	 int merged[s1 + s2];
	//now merging 2 arrays:
	 merge(arr1, arr2, s1,s2, merged);
	 printf("Sorted new array via merge sorting previous arrays is:\n");
	
	for (i = 0; i < s1 + s2; i++) {
        printf("%d\n", merged[i]);
    }
//		   printf("%d\n", arr1[i]); 
    return 0;
}
