/*
Author: Isabelle O'Keeffe
Date: Week of the 25th of Septemver
This program is to reverse a given string
*/

//libraries used
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 50

// Function to reverse a null-terminated string
void reverseString(char *str) {
    int length = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        // Swap characters at positions i and j
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <input_string>\n", argv[0]);
        return 1; // Return error code 1 to indicate invalid usage
    }

    char input[MAX_LENGTH];

    // Copy the input string from the command line argument
    strncpy(input, argv[1], MAX_LENGTH);
    input[MAX_LENGTH - 1] = '\0'; // Ensure null-terminated string

    // Reverse the string using the reverseString function
    reverseString(input);

    printf("%s\n", input);

    return 0; // Return success code 0
}



/*
NOTES:

Required a lot of brainpower for this one, struggled with reversing strings in the past
but it is ver nice to do with a function. I was unable to complete the task without one!

*/

