#include<stdio.h>
#include"rps.c"
#include"rps2.c"

int main() {
	int choice;
	printf("Would you like to play:\n1. Single player\t\t2. Two players\t\t3. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch(choice){
	  case 1:
	     printf("\nGAME IS LOADING...\n\n");
	     computer();
	     break;
	  case 2:
	     printf("\nGAME IS LOADING...\n\n");
	     pvp();
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
