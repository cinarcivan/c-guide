#include <stdio.h>

const float pi = 3.14;

int main(){
    float r;
    float circum;
    float area;
    
    printf("Please type circles radius:");
    scanf("%f", &r);
    area = pi * (r*r); // Calculate and write area to "area" variable
    circum = (2 * pi) * r; // Calculate and write circumference to "circum" variable
    printf("Your circles circum is: %f", circum);
    printf("\nYour circles area is: %f\n", area);

    return 0;
}
