#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){

    int width = atoi(argv[1]);

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == width - 1 || j == 0 || j == width - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); 
    }




return(0);



}