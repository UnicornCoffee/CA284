#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

int array[10];
int count = 0;

for(int i = 1; i < argc; i++){
    array[i - 1] = atoi(argv[i]);
}

for(int i = 0; i < argc -1; i++){
    if(array[i] % 2 != 0){
        count++;
    }


}

printf("%d\n", count);
return (0);

}


