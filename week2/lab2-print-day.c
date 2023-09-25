#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

int day_number = atoi(argv[1]); 

char *day_names[] = {    //created an array to store names of dow
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
    };


printf("%s\n", day_names[day_number - 1]); //print day name corresponding to day number

return (0);

}