#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int size;
	printf("Enter size of the array: ");
	scanf("%d",&size);
	
	int* ptrM = (int*) malloc(size * sizeof(int));
	int* ptrC = (int*) calloc(size, sizeof(int));
	
	int* pM = ptrM;
	int* pC = ptrC;
	
	int* oldPtrM = ptrM;
	int* oldPtrC = ptrC;

	if (ptrM == NULL || ptrC == NULL) {
  		printf("Some weird error occured. Memory not allocated! Exiting....");
  		exit(0);
	}

	printf("===Enter array elements===");
	for (int i = 0; i < size; i++) {
	  printf("\nEnter array element-%d at memory created via malloc(): ", i + 1);
	  scanf("%d", ptrM);
	  ptrM++;
	
	  printf("\nEnter array element-%d at memory created via calloc(): ", i + 1);
	  scanf("%d", ptrC);
	  ptrC++;
	}
	
	printf("===Array elements===");
	for (int i = 0; i < size; i++) {
	  printf("\nArray element-%d at memory created via malloc() is %d", i + 1, *pM);
	  pM++;
	  printf("\nArray element-%d at memory created via calloc() is %d", i + 1, *pC);
	  pC++;
	}

// Now reallocating memory assigned by malloc() and calloc()

	int newSize;
	printf("\n\n====Enter new size for array====");
	scanf("%d", &newSize);
	
	ptrM = (int*) realloc(oldPtrM, newSize * sizeof(int));
	// ptrC = (int*) realloc(oldPtrC, newSize * sizeof(int));
	
	pM = ptrM;
	// pC = ptrC;
	
	if (ptrM == NULL || ptrC == NULL) {
	  printf("Some weird error occured. Memory not allocated! Exiting....");
	  exit(0);
	}
	
	printf("===Enter array elements===");
	for (int i = 0; i < newSize; i++) {
	  printf("\nEnter array element at %d to memory created via malloc(): ", i);
	  scanf("%d", ptrM);
	  ptrM++;
	}
	
	printf("===Array elements===");
	for (int i = 0; i < newSize; i++) {
	  printf("\nArray element at %d to memory created via malloc() is %d", i, *pM);
	  pM++;
	}

	
}