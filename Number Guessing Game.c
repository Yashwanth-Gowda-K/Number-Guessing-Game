#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int secreat_number , guess , attempts =0, max_attempts =7 ;

    srand(time(0));
    secreat_number = rand() %100 + 1;

    printf("welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.");
    printf("You have %d attempts to guess the correct number.\n" , max_attempts);

    while (attempts < max_attempts) {
        printf("Enter your guess: ");
        scanf("%d" , &guess);

        attempts ++;

        if (guess < secreat_number){
            printf("Too low! Try again");

        } else if (guess > secreat_number) { 
            printf("Too high! Try again");

        
        } else {
        printf("Congratulations! You guesses the number %d correctly in %d attempts ", secreat_number , attempts);
        break;
        }
    
    }
    if (attempts == max_attempts){
        printf("Game over! the correct number was %d", secreat_number);
    }
    return 0;
}