//for this one I will try to comment my process for the future! 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   
   //initilaise variables (as zero as they will be holding user inputeed score)
    int try = 0;
    int conversion = 0;
    int penalty = 0;
    int dropgoal = 0;
    int totalscore = 0;

    //take user input from cmdline and multiply by point value from labsheet (atoi converts str to int)
    try = (atoi(argv[1]))*5;
    conversion = (atoi(argv[2]))*2;
    penalty = (atoi(argv[3]))*3;
    dropgoal = (atoi(argv[4]))*3;

    totalscore = try+conversion+penalty+dropgoal; //add all together 

    printf ("%.d\n",totalscore); // %.d will return output as int i.e with no decimal rounded to nearest whole num

    return 0;
}