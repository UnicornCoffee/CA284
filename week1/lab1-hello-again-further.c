#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char * argv[])
{
  
   char name[100]; //put a 100 character limit on what the user can type (probably overkill!)

   printf("Hello! Please enter your name: \n");
   scanf("%s", name); // takes the user input for the name.
   printf("Hello\n %s\n", name);

   return(0);
}

/*

\t is the tab character, creates a horizontal gap i.e 
Hello World --> Hello       World

\n is for linebreaks i.e
Hello World -->
Hello
World


*/