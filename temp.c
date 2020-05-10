#include <stdio.h>

int conversion(int temp, int value) {   
    if (value == 0) 
        return (temp * 9 / 5) + 32;
    else if (value == 1) 
        return (temp - 32) + 5 / 9;
    else 
        printf("Not one value did not match!\n");
    
}

int main() {
    int min, max, i, value;
    
    printf("Cels in Fahr\n");
    printf("Enter 1 for conversion Fahrenheit in Celsius or 0 for Celsius in Fahrenheit. \n");
    scanf("%d", &value);
    printf("Enter min value to max value temperature witch want to know\n");
    printf("Min: ");
    scanf("%d", &min);
    printf("Max: ");
    scanf("%d", &max);
    if(value == 1)
        printf("Fahr:\n");
    else if(value == 0)
        printf("Celsius:\n");

    for(i = min; i <= max; i++)
        printf("%d\n", conversion(i, value));

    return 0;
}