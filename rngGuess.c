#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 10
#define TRUE 1
#define FALSE 0

int main (void) {
    printf("Welcome to Number Guesser!\n");
    int userGuess = 0;
    char yN = 'y'; 
    while (yN == 'y') {
        printf("Input you guess: ");
        scanf("%d", &userGuess);
        int num = rand() % MAX ;

        if (userGuess == num) {
            printf("Congrats! You guess it correctly!\n");
        } else {
            printf("Unfortunately, the number is %d\n", num);
        }

        printf("Want to play again? y/n: ");
        scanf(" %c", &yN);
        yN = tolower(yN);
    }
    return 0;
}