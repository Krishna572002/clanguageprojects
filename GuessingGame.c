// Online C compiler to run C program online
#include <stdio.h>
// library that includes rand function to generate random number
#include <stdlib.h>
#include <time.h>


int main() {
    int number, guess_number, guess_count = 0;
    srand(time(0));
    // to generate random number from 1 to 100
    number = rand()%100 + 1;
    do{
        //Ask the user to guess number from 1 to 100
        printf("Guess the number from 1 to 100 = ");
        scanf("%d", &guess_number);
        if (guess_number > number){
            printf("Lower number please\n");
        }
        else if (guess_number < number){
            printf("Higher number please\n");
        }
        guess_count = guess_count + 1;
    }while(guess_number != number);
    printf("You have taken %d attempts to guess the correct number", guess_count);
}