#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void pvp(){
	int user, user2, i, j;
	int upper = 2, lower = 0;
	char possibility[3][10] = {"Rock", "Paper", "Scissors"};
	int player1 = 0, player2 = 0;
	
	printf("************************\n");
   for(j = 0; j < 5; j++){
	printf("ROUND %d\n", j+1);
	do{
	  printf("Player 1: Choose your move:\n1. Rock\n2. Paper\n3. Scissors\n");
	  printf("You choose: ");
	  scanf("%d", &user);
	  if(user>3||user<1)
	    printf("\nINVALID! CHOOSE AGAIN!\n");
	}while(user>3 || user<1);
	
	printf("\nPlayer 1 uses %s\n\n", possibility[user-1]);

	do{
	  printf("Player 2: Choose your move:\n1. Rock\n2. Paper\n3. Scissors\n");
	  printf("You choose: ");
	  scanf("%d", &user2);
	  if(user2>3||user2<1)
	    printf("\nINVALID! CHOOSE AGAIN!\n");
	}while(user2>3 || user2<1);

	printf("\nPlayer 2 uses %s\n\n", possibility[user2-1]);


// scoring system
	

	if(user-1 == user2-1){
	  printf("It's a draw! No change in scores!\n");
	  printf("CURRENT SCORE IS:\n");
	  printf("Player 1: %d\t\tPlayer 2: %d\n\n", player1, player2);
	  printf("************************\n");
	  continue;
	} 
	else {
// {"Rock", "Paper", "Scissors"}
	  switch(user2-1){
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
	  printf("\nCongratulations! Player 1 defeated Player 2!");
	else if(player1<player2)
	  printf("\nPlayer 2 won! Player 2 defeated Player 1!");
	else
	  printf("\nIt's a draw! Nobody won!");
	}

/*int main() {
	pvp();

	return 0;
}*/