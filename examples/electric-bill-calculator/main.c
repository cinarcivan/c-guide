#include <stdio.h>

int main(){
    float electricBill, inflation, subsFee, unitPrice;
    int previousMonthKwh, spentKwh;
    
    previousMonthKwh = 0;
    subsFee = 0;
    unitPrice = 0;
    inflation = 0;
    spentKwh = 0;
    electricBill = 0;
    
    printf("Please enter previous months electricity consumption: ");
    scanf("%d", &previousMonthKwh);
    printf("Please enter current electricity consumption: ");
    scanf("%d", &spentKwh);
    printf("Please enter previous months subscription fee: ");
    scanf("%f", &subsFee);
    printf("Please enter previous months electricity unit price: ");
    scanf("%f", &unitPrice);
    printf("Please enter inflation as a percentage: ");
    scanf("%f", &inflation);
    printf("\n");

    printf("---OLD VALUES---");
    printf("\n");

    printf("Previous months electricity unit price: %f", unitPrice);
    printf("\n");
    printf("Previous months subscription fee: %f", subsFee);
    printf("\n\n");

    unitPrice += (unitPrice * inflation / 100);
    subsFee += (subsFee * inflation /100);  
    spentKwh = spentKwh - previousMonthKwh;

    electricBill = (spentKwh * unitPrice) + subsFee;

    printf("---UPDATED VALUES---");
    printf("\n");
    printf("Current electricity unit price: %f", unitPrice);
    printf("\n");
    printf("Current subscription fee: %f", subsFee);
    printf("\n\n");
    printf("---ELECTRIC BILL---");
    printf("\n");
    printf("%f", electricBill);
    printf("\n\n");

    return 0;
}
