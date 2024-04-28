#include <stdio.h>

const float pi = 3.14;

int main(){
    float r;
    float circum;
    float area;
    
    printf("Please type circles radius:");
    scanf("%f", &r);
    area = pi * (r*r);
    circum = (2 * pi) * r;
    printf("Your circles circum is: %f", circum);
    printf("\nYour circles area is: %f\n", area);

    return 0;
}
