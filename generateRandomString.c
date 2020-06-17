#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 12

int myStrlen(char str[]);
double myRandom(double min, double max);

int main() {
    char str[62] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890";
    char arr[LENGTH];
    char temp[LENGTH];

    int i;
    srand(time(NULL));
    
    for (i = 0; i < LENGTH; i++) {
        arr[i] = myRandom(0, 1) * myStrlen(str);
        *temp = str[arr[i]];
        printf("%c", *temp);
    }
    printf("\n");

    return 0;
}

double myRandom(double min, double max) {
    return (double)(rand()) / RAND_MAX * (max - min) + min;
}

int myStrlen(char str[]) {
    int i;
    i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}