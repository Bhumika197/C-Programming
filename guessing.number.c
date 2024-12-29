#include <stdio.h>
int main()
{
    int random, guess; 
  int  no_of_guesses= 0;
    
    printf("Welcome to World of guessing Numbers!\n ");
    random = 50; 


    do{
        printf("\nPlease enter your Guess (betwen 1 to 100) : ");
        scanf("%d", &guess);
        no_of_guesses++;

        if(guess > random ){
            printf("Guess a Smaller Number: ");
        }
            else if (guess < random ){
                printf("Guess a larger number: ");
                }
                else{
                    printf("Congratulations!!! You have Successfuly guessed the Number, in %d guesses\n", no_of_guesses);
                }
        }
        
        
            
    while(guess != random);
    printf("Thanks for Playing\n");
    printf("Developed by : Chinta Bhumika Reddy\n");


return 0; 
}

