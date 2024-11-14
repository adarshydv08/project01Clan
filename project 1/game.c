#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int number, guess, nguess=1;
    srand(time(0));
    number=rand()%100 + 1;  // This is used to generate a random no b/w 1 to 100.
    //printf("The number is %d\n", number);

    // Keep running the loop untill the number is guesed.
    
    do
    {
        printf("Guess the no between 1 to 100\n");
        scanf("%d", &guess);

        if(guess>number){   
        printf("Galat... Isse chota number guess karye\n");
        } 
        
        else if(guess<number){
        printf("Galat... Isse bda number guess karye\n");
        }
        
        else{
        printf("WOW... You guessed in %d attempt\n", nguess);
        }
        nguess++;
    } while (guess!=number);
    
    
    return 0;
}