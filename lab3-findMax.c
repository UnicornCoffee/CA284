/*
Author: Isabelle O'Keeffe
Date: Week of the 25th of Septemver
This program accepts an array of integers via the command line and returns the largest element.

*/

//libraries used
#include <stdio.h>
#include <stdlib.h>

// Function to find the maximum element in an array of integers
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main(int argc, char *argv[]) {
    if (argc < 2) { //i consider this a personal experiment
        printf("Usage: %s <integer1> <integer2> ... <integerN>\n", argv[0]);
        return 1; // Return error code 1 to indicate invalid usage
    }

    int size = argc - 1; // number of integers provided
    int arr[size];      // array to store integers

    // Convert command-line arguments to integers and store them in the array
    for (int i = 1; i <= size; i++) {
        arr[i - 1] = atoi(argv[i]);
    }

    // Find the maximum element using the findMax function
    int max = findMax(arr, size);

    // Print the maximum element followed by a newline character
    printf("%d\n", max);

    return 0; // Return success code 0
}

/*
NOTE:

I am getting to grips with using functions, I recalled them from a java module I had in a SW Development course in 2020!
But I got rusty in the 3 years of using them minimally, happy to be awakening that side of my brain!


*/