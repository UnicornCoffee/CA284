/*
 circle-area.c
 author Isabelle O'Keeffe - Copied as part of CA284 LabWork
 */

/* includes*/
#include <stdio.h>
#include <stdlib.h> /* contains functions we may need*/

#define PI 3.14 /*Defining PI as a constant*/

/* Function: Main
 parameters: int argc (argument count)
 char *argv[] an array of command-line arguments
description:  Takes a single argument and computes area of circle
 */

int main(int argc, char *argv[])
{
/* variable initialisation */
	float radius = 0;
	float area = 0; // was -3 but changed back to zero for usability purposes.

    if (radius >=0){ //if the number entered isnt negative

        radius = radius*radius;
        area = radius*PI;

        printf("%.2f\n", area);


    }

    else{

        radius = (radius * -1); // multiplies the negative number by -1 to get the positive (-3*-1=3)
        //continues to do the math 
        radius = radius * radius;
        area = radius*PI;
        printf("You've entered a Negative Number! Computing with a Positive:\n%.2f\n",area);

    }



    return (0); /* exit correctly*/
} /* end program*/

/*

I feel that assuming the user wants a positive number to  be used and
computing the number for the user is the best solution as it removes any
additional steps from the user which could cause confusion.

*/