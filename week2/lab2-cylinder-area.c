#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

int main(int argc, char *argv[]){

if (argc ==1){
    printf("No input given!\n");
} else if (argc ==2){
    printf("Two arguments needed\n");

}else if(argc == 3){
    double radius = atof(argv[1]);
    double height = atof(argv[2]);

    if (radius < 0 || height < 0){
        printf("The radius or height can not be negative!\n");

    } else {
        double cylinder_area = 2 * PI * radius *(radius+height);
        printf("%.2lf\n", cylinder_area);


    }
} else{

    printf("Too many arguments\n");
}

return (0);


}
