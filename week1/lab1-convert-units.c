#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double centimeters = atof(argv[1]);
    double inches = centimeters / 2.54;

    printf("%.2lf\n", inches);

    return 0;
}

