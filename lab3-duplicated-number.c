/*
Author: Isabelle O'Keeffe
Date: Week of the 25th of September
This program accepts an array of integers via the command line and returns any duplicates.

*/

#include <stdio.h>
#include <stdlib.h>

// Function to find the duplicated number in an array, compares each element and to find a dupe
int findDupe(int ary[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (ary[i] == ary[j]) {
                return ary[i]; // Duplicated number found
            }
        }
    }
    return -1; // No duplicate number found
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s <element1> <element2> ... <elementN>\n", argv[0]);
        return 1; // Return error code 1 to indicate invalid usage
    }

    int size = argc - 1; // Number of elements in the array (excluse prog name from use)
    int array[size]; // Array to store elements

    // Convert command-line arguments to integers and store them in the array
    for (int i = 1; i < argc; i++) {
        array[i - 1] = atoi(argv[i]); //atoi converts string to int
        if (array[i - 1] <= 0) {
            printf("Error: Please provide positive integers only.\n");
            return 1; // Return error code 1 for invalid input
        }
    }

    // Find the duplicated number using the findDupe function
    int duplicated = findDupe(array, size);

    // Print the result
    if (duplicated != -1) { // will not execute if dupe not found previously
        printf("%d\n", duplicated);
    } else {
        printf("no duplicated number\n");
    }

    return 0; // Return success code 0
}