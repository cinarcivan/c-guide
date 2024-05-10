#include <stdio.h>

int main() {
    int number;
    
    printf("Please enter a integer: ");
    scanf("%d", &number);

    number = number % 2;

    if(number == 0){
	printf("Your number is even number.\n");
    }
    else{
	printf("Your number is odd number.\n");
    }

    return 0;
}
