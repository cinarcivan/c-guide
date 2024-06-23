#include <stdio.h>

int main(){
    int number;
    
    printf("Please enter a integer: ");
    scanf("%d", &number);

    number = number % 2;

    switch(number){

    case 0:
	printf("Your number is even.\n");
	break;
    case 1:
	printf("Your number is odd.\n");
	break;
    default:
	printf("Ups, something broken.\n");
    }

    return 0;
}
