#include <stdio.h>

void main(){
    int guess;
    int secretNumber = 3;

    printf("Guess a number between 1 and 5: ");
    scanf("%d", &guess);

    if (guess == secretNumber) {
        printf("Well done! You guessed it right!\n");
    } else {
        printf("Sorry, it's wrong, you lost. The correct number was %d.\n", secretNumber);
    }


}
