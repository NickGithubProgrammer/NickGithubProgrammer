// Mini Project : Tic Tac Toe

// Step 1 : Including header files

#include <stdio.h> // Header file for standard input output functions
#include <conio.h> // Header file for console input output functions
#include <windows.h>  // Header file to include window macros
#include <stdlib.h> // Header file to include standard library functions

// Step 2 : Declaring an array and functions

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};
int CheckWin();
void DrawBoard();

// Step 3 : Program of entering choice in the game by the player, marking the position where player has given choice, and checking validity of choice given by the player

int main(){
	int player = 1, i ,choice;
	char mark; // X,O
	do {
		DrawBoard();
		player = (player % 2) ? 1 : 2;
		printf("\nPlayer %d, enter the choice : ",player);
		scanf("%d",&choice);
		mark = (player == 1) ? 'X' : 'O';
		if(choice == 1 && square[1] == '1')
			square[1] = mark;
		else if(choice == 2 && square[2] == '2')
			square[2] = mark;
			else if(choice == 3 && square[3] == '3')
			square[3] = mark;
			else if(choice == 4 && square[4] == '4')
			square[4] = mark;
			else if(choice == 5 && square[5] == '5')
			square[5] = mark;
			else if(choice == 6 && square[6] == '6')
			square[6] = mark;
			else if(choice == 7 && square[7] == '7')
			square[7] = mark;
			else if(choice == 8 && square[8] == '8')
			square[8] = mark;
			else if(choice == 9 && square[9] == '9')
			square[9] = mark;

			else {
				printf("\nInvalid option !");
				player--;
				getch();
			}
			i = CheckWin();
			player++;

	}while(i == -1);

	DrawBoard();
	if(i==1){
		printf("\n ==> Player %d won !",--player);
	}
	else {
		printf("\n ==> Game draw !");
	}
		getch();
		return 0;
}

// Step 4 : Program to save the winning positions

int CheckWin(){
	if(square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if(square[7] == square[8] && square[8] == square[9])
		return 1;
	else if(square[1] == square[4] && square[4] == square[7])
		return 1;
	else if(square[2] == square[5] && square[5] == square[8])
		return 1;
	else if(square[3] == square[6] && square[6] == square[9])
		return 1;
	else if(square[1] == square[5] && square[5] == square[9])
		return 1;
	else if(square[3] == square[5] && square[5] == square[7])
		return 1;
	else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] !='4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else
		return -1;
}

//Step 5 : Making the Tic Tac Toe board

void DrawBoard(){
	system("cls");
	printf("\n\n\t Tic Tac Toe \n\n");
	printf("Player 1 (X) - Player 2 (O) \n\n\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[1],square[2],square[3]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[4],square[5],square[6]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[7],square[8],square[9]);
	printf("     |     |     \n");
}
