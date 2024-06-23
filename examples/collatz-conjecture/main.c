#include <stdio.h>

int main(){
    unsigned long long int number;
    printf("Please enter positive integer: ");
    scanf("%llu", &number);

    while(number > 0){
	if(0 == number % 2){
	    printf("%llu/2=", number);
	    number = number / 2;
	    printf("%llu\n", number);
	}
	else if(1 == number % 2){
	    printf("%llu*3+1=", number);
	    number = (number * 3) + 1;
	    printf("%llu\n", number);
	}
	if(number == 1){
	    printf("\n4-2-1 loop\n\n");
	    return 0;
	}
    }
}
