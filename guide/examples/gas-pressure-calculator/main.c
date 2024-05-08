#include <stdio.h>

int main(){

    // gas pressure = (mole * constant R * temperature) / volume

    float pressure, R;
    int mole, temp, volume;

    R = 0.82;

    printf("Please enter mole var: ");
    scanf("%d", &mole);

    printf("Thank you! Now, please enter the temperature: ");
    scanf("%d", &temp);

    printf("OK! Lastly, please enter the volume: ");
    scanf("%d", &volume);

    pressure = (mole * R * temp) / volume;

    printf("\n");

    printf("Pressure: %f", pressure);
    
    printf("\n");
    
    return 0;
}
