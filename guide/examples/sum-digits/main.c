#include <stdio.h>
#include <stdio.h>

int main()
{
    int result, remainder, number;
    result = 0;

    printf("Please enter a 4 digit number:");
    scanf("%d", &number);

    result += number / 1000; // Divide by 1,000 for thousands digit
    remainder = number % 1000;

    result += remainder / 100; // Divide by 100 for hundreds digit 
    remainder = number % 100;

    result += remainder / 10; // Divide by 10 for tens digit
    remainder = number % 10;

    result += remainder / 1;

    printf("Sum of 4 digits: %d\n", result);

    return 0;
}
