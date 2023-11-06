#include <stdio.h>
// library for generating random rumber
#include <stdlib.h>
#include <time.h>

int rockpaperscissor (computer, you){
    if (computer == you){
        return 0;
    }
    
    if (computer == 'r' && you == 'p'){
        return 1;
    }
    else if (computer == 'p' && you == 'r'){
        return -1;
    }
    
    if (computer == 's' && you == 'r'){
        return 1;
    }
    else if (computer == 'r' && you == 's'){
        return -1;
    }
    
    if (computer == 'p' && you == 's'){
        return 1;
    }
    else if (computer == 's' && you == 'p'){
        return -1;
    }
}

int main() {
    char computer, you;
    int random, result;
    srand(time(0));
    random = rand()%100 + 1;
    if (random > 0 && random < 33){
        computer = 'r';
    }
    else if (random > 33 && random < 66){
        computer = 'p';
    }
    else{
        computer = 's';
    }
    printf("Enter 'r' for rock , 'p' for paper, 's' scissors : ");
    scanf("%c",&you);
    result = rockpaperscissor (computer , you);
    if (result == 1)
    {
        printf("you won!");
    }
    else if (result == -1){
        printf("Computer won!");
    }
    else{
        printf("Match drawn");
    }
}