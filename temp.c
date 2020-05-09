#include <stdio.h>

#define MIN 0
#define MAX 300
#define STEP 10

int conversion(int temp) {
    return (temp * 9 / 5) + 32;
}

int main() {
    int i;
    printf("Cels in Fahr\n");
    for( i = MIN; i <= MAX; i += STEP ) {
        printf("%d - %d\n", i, conversion(i));
    }
}