#include <stdio.h>

int main(){
    float firstAngle, secondAngle, thirdAngle;

    printf("Please enter first angle of your triangle: ");
    scanf("%f", &firstAngle);
    printf("Please enter second angle: ");
    scanf("%f", &secondAngle);
    printf("Please enter last angle: ");
    scanf("%f", &thirdAngle);

    if(180.0 == firstAngle + secondAngle + thirdAngle){
	if(firstAngle == secondAngle && secondAngle == thirdAngle){
	    printf("Your triangle is an equilateral triangle.\n");
	}
	else if(firstAngle == secondAngle || secondAngle == thirdAngle || firstAngle == thirdAngle){
	    printf("Your triangle is isosceles triangle.\n");
	}
	else{
	    printf("Your triangle is scalene triangle.\n");
	}
    }
    else{
	printf("The specified angle values do not form a valid triangle. Please enter valid angle values.\n");
    }

    return 0;
}
