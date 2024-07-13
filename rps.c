#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"rps2.c"

void computer(){
	int user, i, j;
	int upper = 2, lower = 0, comp;
	char possibility[3][10] = {"Rock", "Paper", "Scissors"};
	int player1 = 0, player2 = 0; // 1 => user 2 => comp
	
	printf("************************\n");
   for(j = 0; j < 5; j++){
	printf("ROUND %d\n", j+1);
	do{
	  printf("Choose your move:\n1. Rock\n2. Paper\n3. Scissors\n");
	  printf("You choose: ");
	  scanf("%d", &user);
	  if(user>3||user<1)
	    printf("\nINVALID! CHOOSE AGAIN!\n");
	}while(user>3 || user<1);
	
	printf("\nPlayer 1 uses %s\n", possibility[user-1]);

	srand(time(NULL));
// seeding with time coz without srand(), rand() will seed to 1
// by default. No same sequence of random numbers generated

	for (i = 0; i < 1; i++) { 
        comp = (rand() % (upper - lower + 1)) + lower;
// rand() will generate random 7 digit no.
        }

	printf("Player 2 uses %s\n\n", possibility[comp]);


// scoring system
	

	if(user-1 == comp){
	  printf("It's a draw! No change in scores!\n");
	  printf("CURRENT SCORE IS:\n");
	  printf("Player 1: %d\t\tPlayer 2: %d\n\n", player1, player2);
	  printf("************************\n");
	  continue;
	} 
	else {
// {"Rock", "Paper", "Scissors"}
	  switch(comp){
	    case 0:
		if(user-1 == 1)
		  player1++;
		if(user-1 == 2)
		  player2++;
		break;
	    case 1:
		if(user-1 == 0)
		  player2++;
		if(user-1 == 2)
		  player1++;
		break;
	    case 2:
		if(user-1 == 1)
		  player2++;
		if(user-1 == 0)
		  player1++;
		break;
	  }
	}
	if(player1==player2){
	 printf("It's a draw! No change in scores!\n");
	}
	printf("CURRENT SCORE IS:\n");
	printf("Player 1: %d\t\tPlayer 2: %d\n\n", player1, player2);
	printf("************************\n");
   }

	if(player1>player2)
	  printf("\nCongratulations! You defeated the computer!");
	else if(player1<player2)
	  printf("\nYou lost. Better luck next time!");
	else
	  printf("\nIt's a draw! Nobody won!");
}

int main() {
	int choice;
	printf("Would you like to play:\n1. Single player\t\t2. Two players\t\t3. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch(choice){
	  case 1:
	     computer();
	     printf("\nGAME IS LOADING...\n\n");
	     break;
	  case 2:
	     pvp();
	     printf("\nGAME IS LOADING...\n\n");
	     break;
	  case 3:
	     printf("Exiting the app...");
	     exit(0);
	     break;
	  default:
	     printf("Invalid input. Try again later");
	}

	return 0;
}