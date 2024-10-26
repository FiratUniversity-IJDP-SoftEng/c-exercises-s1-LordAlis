#include <stdio.h>

int main() {
    int age;
    printf("How old are you? ");
    scanf("%d", &age);

    for (int i = 1; i <= age; i++) {
        printf("Happy Birthday! (%d)\n", i);
    }

    printf("Your days are limited, Live each day as if it were your last, Happy birthday!\n");  

}
