#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char place_holder[9] ={'1','2','3','4','5','6','7','8','9'}; //Instruction for player to inpur their value
int player = 1;

void board();
int checkwin();
void input(char form,int choice);

int main(){
	int choice,i=0;
	char form;

	printf("!!WELCOME TO TIC-TAC-TOE!!\n");

	while(i==0){
		//Player if the number of move is odd player is 1 else player is 2
		if(player % 2 == 0){
		player = 2;
			}
		else {
		player = 1;
			}
		//If player is 1 then the FORM is X else it is O
		if(player == 1){
			form = 'X';
		}
		else{
			form = 'O';
		}
		//clear the above value
		system("clear");
		
		board();

		//Asking the user for their input
		printf("Enter your place player %d: ",player);
		scanf("%d",&choice);

		input(form,choice);
		player++;

		i = checkwin();


	}

	if(i==1){
	system("clear");
	printf("\n\nPlayer %d won !!\n\n",player-1);
	printf("***********************FINAL BOARD**************************\n");
	board();
	}
return 0;
}

void board(){
	printf("\nPlayer 1 -> X\n");
	printf("Player 2 -> Y\n");

	printf("\n\n%c | %c | %c\n",place_holder[0],place_holder[1],place_holder[2]);
	printf("- | - | - ");
	printf("\n%c | %c | %c",place_holder[3],place_holder[4],place_holder[5]);
	printf("\n- | - | -");
	printf("\n%c | %c | %c\n\n",place_holder[6],place_holder[7],place_holder[8]);

}

int checkwin(){
	//0 1 2 
	if(place_holder[0]==place_holder[1] && place_holder[1]==place_holder[2]){
		return 1;
	}
	//0 4 8
	else if(place_holder[0]==place_holder[4] && place_holder[4]==place_holder[8]){
		return 1;
	}
	//0 3 6
	else if(place_holder[0]==place_holder[3] && place_holder[3]==place_holder[6]){
		return 1;
	}
	//1 4 7 
	else if(place_holder[1]==place_holder[4] && place_holder[4]==place_holder[7]){
		return 1;
	}
	//2 5 8
	else if(place_holder[2]==place_holder[5] && place_holder[5]==place_holder[8]){
		return 1;
	}
	//3 4 5
	else if(place_holder[3]==place_holder[4] && place_holder[4]==place_holder[5]){
		return 1;
	}
	//6 7 8
	else if(place_holder[6]==place_holder[7] && place_holder[7]==place_holder[8]){
		return 1;
	}
	// 2 4 6
	else if(place_holder[2]==place_holder[4] && place_holder[4]==place_holder[6]){
		return 1;
	}
	else{
		return 0;
	}
}


void input(char form,int choice){
	if(choice == 1 && place_holder[0]=='1'){
		place_holder[0] = form;
	}
	else if(choice == 2 && place_holder[1]=='2'){
		place_holder[1] = form;
	}
	else if(choice == 3 && place_holder[2]=='3'){
		place_holder[2] = form;
	}
	else if(choice == 4 && place_holder[3]=='4'){
		place_holder[3] = form;
	}
	else if(choice == 5 && place_holder[4]=='5'){
		place_holder[4] = form;
	}
	else if(choice == 6 && place_holder[5]=='6'){
		place_holder[5] = form;
	}
	else if(choice == 7 && place_holder[6]=='7'){
		place_holder[6] = form;
	}
	else if(choice == 8 && place_holder[7]=='8'){
		place_holder[7] = form;
	}
	else if(choice == 9 && place_holder[8]=='9'){
		place_holder[8] = form;
	}

	else{
		printf("!!Invalid Move!!");
		player--;
	}
}
