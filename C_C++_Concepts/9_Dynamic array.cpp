#include<iostream>

int main() {
    int  **arr = new int*[10]; // Create dynamic array of pointers to integers

    // Allocate memory for each integer and assign values
    for (int i = 0; i < 10; i++) {
        arr[i] = new int; // Allocate memory for an integer
        *arr[i] = i + 1; // Assign a value to the integer
    }

    // Access and print the values
    for (int i = 0; i < 10; i++) {
        std::cout << "Value at index " << i << ": " << *arr[i] << std::endl;
    }

    // Deallocate the memory
    for (int i = 0; i < 10; i++) {
        delete arr[i]; // Deallocate each integer
    }
    delete[] arr; // Deallocate the array itself

    return 0;
}
