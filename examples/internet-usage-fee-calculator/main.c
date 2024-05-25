#include <stdio.h>

int main(){
    float usage, fee;
    const float extraMbFee = 0.02;
    const float constUsageLimit = 2048.0;
    fee = 25.0;

    printf("Please enter your monthly internet usage in MB: ");
    scanf("%f", &usage);
    
    if(usage <= 0.0){
	printf("Please enter valid usage value.\n");
    }
    else if(usage > constUsageLimit){
	usage = usage - constUsageLimit;
	fee += usage * extraMbFee;
	printf("Your internet fee is: %.2f USD\n", fee);
    }
    else{
	printf("Your internet fee is: %.2f USD\n", fee);
    }

    return 0;
}
