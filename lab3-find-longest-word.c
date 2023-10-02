/*
Author: Isabelle O'Keeffe
Date: Week of the 25th of Septemver
This program accepts a sentence as input via the command line and finds the longest word in the sentence.

*/

//libraries used
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //  allow use of strcopy

#define MAX_LENGTH 100

// Function to find and print the longest word in a sentence
void findLongestWord(char sentence[]) {
    char longestWord[MAX_LENGTH];
    char currentWord[MAX_LENGTH];
    int longestLength = 0;
    int currentLength = 0;
    int i = 0;

    while (sentence[i] != '\0') {
        // Skip leading spaces
        while (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\n') {
            i++;
        }

        // Read the current word
        currentLength = 0;
        while (sentence[i] != ' ' && sentence[i] != '\t' && sentence[i] != '\n' && sentence[i] != '\0') {
            currentWord[currentLength] = sentence[i];
            currentLength++;
            i++;
        }

        // Null-terminate the current word
        currentWord[currentLength] = '\0';

        // Check if the current word is longer than the longest word
        if (currentLength > longestLength) {
            longestLength = currentLength;
            strcpy(longestWord, currentWord);
        }
    }

    // Print the longest word
    printf("%s\n", longestWord);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <sentence>\n", argv[0]);
        return 1; // Return error code 1 to indicate invalid usage
    }

    char *sentence = argv[1];
    findLongestWord(sentence);

    return 0; // Return success code 0
}