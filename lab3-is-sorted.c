/*
Author: Isabelle O'Keeffe
Date: Week of the 25th of Septemver
This program accepts an array of integers via the command line and program sorts the array in ascending order and then prints out the sorted array.
Using selection sort algo

*/

//libraries used
#include <stdio.h>
#include <stdlib.h>

// Function to perform selection sort
void selection_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the minimum element with the current element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <element1> <element2> ... <elementN>\n", argv[0]);
        return 1; // Return error code 1 to indicate invalid usage
    }

    int size = argc - 1; // Number of elements in the array excludes program name in command line
    int array[size];    // Array to store elements

    // Convert command-line arguments to integers and store them in the array
    for (int i = 1; i < argc; i++) {
        array[i - 1] = atoi(argv[i]);
    }

    // Perform selection sort on the array
    selection_sort(array, size);

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }

    return 0; // Return success code 0
}