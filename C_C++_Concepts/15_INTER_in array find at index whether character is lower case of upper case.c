//In an array find at index what exists lower case or upper case, if upper case, print word in upper and vice versa
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
	//via no methods
	int size;
    printf("Enter size of the string: ");
    scanf("%d", &size);
	
	char str[size];
	printf("Enter string: ");
	scanf("%s",&str);
	
	printf("\nString entered is: %s", str);
	
	printf("\nEnter index to check for the character:");
	int index;
	bool flag = false;
	scanf("%d",&index);
	char character = str[index];
	int i = 0;
	while(str[i]!='\0'){
		if(character == str[i]){
			printf("\nFound %c at %d", str[i],i);
			flag = true;
		}
		i++;
	}
	i=0;
	if(flag){
			if(character>='a' && character<='z')	{
				printf("\n");
				printf(strlwr(str));
			}else{
				printf("\n");
				printf(strupr(str));
			}
			i++;
	
	}else
		printf("No mathes found");
    
    
//via methods
/*	
    char arr[] = "heLLo";
    int index;
    printf("Enter the index of the character to check: ");
    scanf("%d", &index);
    if (index < 0 || index >= sizeof(arr) - 1) {
        printf("Invalid index.\n");
        return 0;
    }
    char character = arr[index];
    
    if (isupper(character)) {
        printf("The character '%c' at index %d is uppercase.\n", character, index);
        printf("Uppercase String: %s\n", strupr(arr));
    } else if (islower(character)) {
        printf("The character '%c' at index %d is lowercase.\n", character, index);
        printf("Lowercase String: %s\n", strlwr(arr));
    } else {
        printf("The character '%c' at index %d is neither lowercase nor uppercase.\n", character, index);
    }
*/  
    return 0;
}