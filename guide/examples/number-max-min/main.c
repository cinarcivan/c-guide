#include <stdio.h>

int main(){
    int number1, number2, number3, max, min;

    printf("Please enter 3 number (hit the enter key after your number): ");
    scanf("%d%d%d", &number1, &number2, &number3);

    if(number1 > number2 && number1 > number3){
	max = number1;
	if(number2 < number3){
	    min = number2;
	}
	else{
	    min = number3;
	}
    }
    else if(number2 > number1 && number2 > number3){
	max = number2;
	if(number3 < number1){
	    min = number3;
	}
	else{
	    min = number1;
	}
    }
    else if(number3 > number1 && number3 > number2){
	max = number3;
	if(number2 < number1){
	    min = number2;
	}
	else{
	    min = number1;
	}
    }
    printf("The largest number in a set: %d", max);
    printf("\n");
    printf("The least number in a set: %d", min);
    printf("\n");

    return 0;
}
