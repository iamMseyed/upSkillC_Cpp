//finding prime number(s) in an array
#include <stdio.h>
int checkPrime(int num) {
    if (num <= 1) {
        return 0;
    }    
    for (int j = 2; j <= num/2; j++) {
        if (num % j == 0) {
            return 0;
        }
    }    
    return 1;
}
int main() {
    int arr[] = {9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    int isprime = 0;   
    for (int i = 0; i < n; i++) {
        isprime = checkPrime(arr[i]);
        if (isprime == 1) {
            count++;
        }
    }
    printf("Count of Prime numbers in the given array: %d\n", count);
    return 0;
}