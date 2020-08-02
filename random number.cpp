/* Write a number-guessing game in which the computer selects a random number in the range 1 to 100, and users get a maximum
of 20 attempts to guess it. */
#include<stdio.h>   // Header files 
#include<stdlib.h> 
#include <time.h>

int  SayYouWon; // function declearing aaccording to dunction
int SayYouLost;
int main()
{
 int guess_num,random_num;
 

 int chance=20;
 printf("WELCOME  number-guessing game\n");
 printf("Guess the number which is between 1 to 100\n");
 printf("you have total chance : 20\n");

srand((unsigned int)(time(NULL))); /* srand function to seed the random
number generator. */

 random_num=rand()%100;
 while(chance>0) // use greater than symbol
 {
  printf("\nEnter Your Guess Number \n"); // statment 
  scanf("%d",&guess_num);

  if(guess_num==random_num) // condition
  {
   printf("\nCongragulation your guess is right \n");
   printf("You have won the game \n");
   
      exit(0);
  }

  if(random_num>guess_num) // use greater than symbol
  {
   printf("HINT: your guess is low \n");
  }
  if(random_num<guess_num) /
  {    printf("HINT :Your guess is high \n");
  }
  printf("your chances left  %d\n",--chance); 
  if(chance==1)
  {
   printf("hint : random_num +100 =%d",random_num+100);
  }
    }
printf("\n\nYou have loose the game\n");
printf("The Random  number is  %d\n",random_num);

return 0;
}
void sayYouWon() // function delaring for saywon
{
    int randomWon;
int getRandomNumber;
    randomWon = getRandomNumber;

    switch(randomWon)
	{
    case 1:
        printf( "You are really good at this!") ;
        break;
    case 2:
        printf("WOW! What a guess!" ) ;
        break;
    case 3:
       printf("Nice guess!" ) ;
        break;
    case 4:
        printf("You seem to be professional!") ;
        break;
    case 5:
       printf("You played very well!") ;
    }
}

void sayYouLost() // function delaring for saylost
{
    int randomLost;
int getRandomNumber;
    randomLost = getRandomNumber;

    switch(randomLost){
    case 1:
        printf("You are really bad at guessing!" ) ;
        break;
    case 2:
       printf("That is an embarrassing defeat!" );
        break;
    case 3:
        printf("Very bad guesses" );
        break;
    case 4:
        printf("You don't seem to be good at this!") ;
        break;
    case 5:
        printf("You played very bad!");
    }
}
