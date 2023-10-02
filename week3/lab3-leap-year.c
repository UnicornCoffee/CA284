/*
Author: Isabelle O'Keeffe
Date: Week of the 25th of Septemver
This program prints out all leap years between two integer arguments, within the range of 1582 CE to 2020 CE.

*/

//libraries used
#include <stdio.h>
#include <stdlib.h> // allows me to use atoi without errors!

// Function to check if a year is a leap year
int is_leap_year(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <start_year> <end_year>\n", argv[0]);
        return 1; // Return error code 1 to indicate invalid usage
    }


    // argv 1 and 2 are the years specified by the user
    int startYear = atoi(argv[1]); //atoi = ASCII to int 
    int endYear = atoi(argv[2]);

    // Check if the inputted years are within the given range
    if (startYear < 1582 || endYear > 2020) {
        printf("Please enter years within the range 1582 CE to 2020 CE.\n");
        return 1; // Return error code 1 for invalid input
    }

    // Print leap years within the specified range
    //For each year in the range,check if it's a leap year by calling the is_leap_year function. 
    //If it's a leap year, it prints the year.
    for (int year = startYear; year <= endYear; year++) {
        if (is_leap_year(year)) {
            printf("%d\n", year);
        }
    }

    return 0; // Return success code 0
}

/*
NOTES:

Leap years are divisible by 4
years divisible by 100 are not a leap year unless they are also divisible by 400

I was stuck problem solvign this one for a while, only to realise I forgot #include <stdlib.h>!


*/
