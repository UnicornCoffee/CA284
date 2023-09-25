#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   
   int amount_cm_lower = 30;
   int amount_cm_higher = 50;

   while (amount_cm_lower < amount_cm_higher)
   {

    printf ("%.2f\n", amount_cm_lower/2.54); /* centimetres multiplied by 2.54 to get in inches */
        amount_cm_lower++;

   }


    return 0;
}
