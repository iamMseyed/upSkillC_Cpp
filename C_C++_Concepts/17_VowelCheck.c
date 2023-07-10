#include<stdio.h>
#include<conio.h>

int main(){
	printf("Enter any character to check whether it is a vowel or not: ");
	char c;
	scanf("%c",&c);
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("%c is a vowel!",c);
			break;
		default:
			printf("%c is not a vowel!",c);
	} 
		
}