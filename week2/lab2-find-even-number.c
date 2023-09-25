#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

int array[10];
int even_index[10];
int count_even = 0;

for(int i = 1; i < argc; i++){
    array[i - 1] = atoi(argv[i]);

}

for (int i = 0; i < argc - 1; i++) {
    if (array[i] % 2 == 0) {
        even_index[count_even] = i;
        count_even++;
    }
}

if (count_even == 0) {
    printf("Not found!\n");
} else {
    for (int i = 0; i < count_even; i++) {
    printf("%d - %d\n", even_index[i], array[even_index[i]]);
    }
}

return (0);

}
