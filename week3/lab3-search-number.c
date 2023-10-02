/*
Author: Isabelle O'Keeffe
Date: Week of the 25th of September
This program accepts an array of integers via the command line and returns the number asked for.

*/

//libraries used
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 50

// Function to find a number in an array and return its index, or -1 if not found
int findNumber(int num, int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return i; // Number found, return its index
        }
    }
    return -1; // Number not found, return -1
}

int main(int argc, char *argv[]) {
    if (argc < 3) { // more practice with errors!
        printf("Usage: %s <number_to_find> <element1> <element2> ... <elementN>\n", argv[0]);
        return 1; // Return error code 1 to indicate invalid usage
    }

    int number_to_find = atoi(argv[1]); // Number to search for
    int size = argc - 2; // Number of elements in the array
    int array[MAX_LENGTH]; // Array to store elements

    // Convert command-line arguments to integers and store them in the array
    for (int i = 2; i < argc; i++) {
        array[i - 2] = atoi(argv[i]);
    }

    // Find the number using the findNumber function
    int index = findNumber(number_to_find, array, size);

    // Print the results
    if (index != -1) {
        printf("Found %d at %d\n", number_to_find, index);
    } else {
        printf("%d not found\n", number_to_find);
    }

    return 0; // Return success code 0
}


