#include <stdio.h>

void main(){
    char pet[10];

    printf("Do you have a cat or a dog? ");
    scanf("%s", pet);

    if (strcmp(pet, "cat") == 0) {
        printf("Your cat says Meoww!\n");
    } else if (strcmp(pet, "dog") == 0) {
        printf("Your dog says Woof woof!\n");
    } else {
        printf("Sorry, I've never seen this pet before.\n");
    }
}
