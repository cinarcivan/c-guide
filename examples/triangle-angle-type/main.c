/* Firtsly let's geometrically define triangle types:
 * Acute triangle: All angles are less than 90 degrees.
 * Right triangle: One angle is exactly 90 degrees.
 * Obtuse triangle: One angle is greater than 90 degrees.
 *
 * Now we can check the formula for the triangle types:
 * Acute triangle: a^2 + b^2 > c^2
 * Right triangle: a^2 + b^2 = c^2
 * Obtuse triangle: a^2 + b^2 < c^2
 *
 * Let's implement the code. */

#include <stdio.h>

int main(){
    float a, b, c;
    char longestSide;

    printf("Please enter the first side of triangle: ");
    scanf("%f", &a);
    printf("Now please enter second side: ");
    scanf("%f", &b);
    printf("Lastly enter third side: ");
    scanf("%f", &c);

    if(a > b && a > c){
	longestSide = 'a';
    }
    else if(b > a && b > c){
	longestSide = 'b';
    }
    else{
	longestSide = 'c';
    }

    a = a * a;
    b = b * b;
    c = c * c;

    if(longestSide == 'a'){
	if(b + c > a){
	printf("Your triangle is acute triangle and all angles are less than 90 degrees.\n");
	}
	else if(b + c < a){
	printf("Your triangle is obtuse triangle and one angle is greater than 90 degrees.\n");
	}
	else if(b + c == a){
	printf("Your triangle is right triangle and one angle is exactly 90 degrees.\n");
	}
    }
    else if(longestSide == 'b'){
	if(a + c > b){
	printf("Your triangle is acute triangle and all angles are less than 90 degrees.\n");
	}
	else if(a + c < b){
	printf("Your triangle is obtuse triangle and one angle is greater than 90 degrees.\n");
	}
	else if(a + c == b){
	printf("Your triangle is right triangle and one angle is exactly 90 degrees.\n");
	}
    }
    else{
	if(b + a > c){
	printf("Your triangle is acute triangle and all angles are less than 90 degrees.\n");
	}
	else if(b + a < c){
	printf("Your triangle is obtuse triangle and one angle is greater than 90 degrees.\n");
	}
	else if(b + a == c){
	printf("Your triangle is right triangle and one angle is exactly 90 degrees.\n");
	}
    }
    return 0;
}
