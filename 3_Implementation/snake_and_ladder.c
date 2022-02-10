/**
 * @file snake_and_ladder.c
 * @author your name (you@domain.com)
 * @brief it shows how snake and ladder game works in online
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>
int n_players,_1st=0,_2nd=0,_3rd=0,_4th=0,position=0,seat=0,f,d1,d2;
char n;

int Rolling();
int Dice();
int main()
{                         printf("\t\t\t\tWellcome to Snake Ladder Game\n\n");
   printf("|100 99 98 97 96 95 94 93 92 91 |              Snake 99 to 04      ladder 75 to 96\n");
   printf("|90  89 88 87 86 85 84 83 82 81 |              Snake 92 to 76      ladder 17 to 93\n");
   printf("|80  79 78 77 76 75 74 73 72 71 |              Snake 83 to 80      ladder 70 to 89\n");
   printf("|70  69 68 67 66 65 64 63 62 61 |              Snake 67 to 49      ladder 39 to 80\n");
   printf("|60  59 58 57 56 55 54 53 52 51 |              Snake 59 to 37      ladder 62 to 78\n");
   printf("|50  49 48 47 46 45 44 43 42 41 |              Snake 41 to 20      ladder 29 to 54\n");
   printf("|40  39 38 37 36 35 34 33 32 31 |              Snake 31 to 14      ladder 32 to 51\n");
   printf("|30  29 28 27 26 25 24 23 22 21 |              Snake 24 to 07      ladder 02 to 23\n");
   printf("|20  19 18 17 16 15 14 13 12 11 |              Snake 19 to 06      ladder 08 to 12\n");
   printf("|10  09 08 07 06 05 04 03 02 01 |             The player who reach 100 first will be winner\n");

printf("\t\t\t\tPress Enter to roll the dice\n");
printf("Maximum player should not exceed 4\t\t\tEnter the number of players you want:");
scanf("%d",&n_players);
//Selection of players
    while("game")
    {
    	f=(seat%n_players)+1;
    	printf("Players %d turn\n", f);
    	
    	
    	Rolling();
    	Dice();
    	
    	if(f==1)
    	position=_1st;
    	if(f==2)
    	position=_2nd;
    	if(f==3)
    	position=_3rd;
    	if(f==4)
    	position=_4th;
    	if(position+d1 > 100)
    	printf("The Value exceeds 100 so the player will not move\n");
    	else if(position+d1 <=100)
    	{
    	position=position+d1;//increment of player position
    	
    	//for ladders
    	if(position == 2)
    	{
    		printf("Hurry! Up the ladder!\n");
    		position=position+21;
		}
		if(position == 8)
    	{
    		printf("Hurry! Up the ladder!\n");
    		position=position+4;
		}
		if(position == 17)
    	{
    		printf("Hurry! Up the ladder!\n");
    		position=position+76;
		}
		if(position == 29)
    	{
    		printf("Hurry! Up the ladder!\n");
    		position=position+25;
		}
		if(position == 32)
    	{
    		printf("Hurry! Up the ladder!\n");
    		position=position+19;
		}
		if(position == 39)
    	{
    		printf("Hurry! Up the ladder!\n");
    		position=position+41;
		}
		if(position == 62)
    	{
    		printf("Hurry! Up the ladder!\n");
    		position=position+16;
		}
		if(position == 70)
    	{
    		printf("Hurry! Up the ladder!\n");
    		position=position+19;
		}
		if(position == 75)
    	{
    		printf("Hurry! Up the ladder!\n");
    		position=position+21;
		}
		//for Snakes
		if(position == 19)
    	{
    		printf("ooH! Bitten by a snake!\n");
    		position=position-13;
		}
		if(position == 24)
    	{
    		printf("ooH! Bitten by a snake!\n");
    		position=position-17;
		}
		if(position == 31)
    	{
    		printf("ooH! Bitten by a snake!\n");
    		position=position-17;
		}
		if(position == 41)
    	{
    		printf("ooH! Bitten by a snake!\n");
    		position=position-21;
		}
		if(position == 59)
    	{
    		printf("ooH! Bitten by a snake!\n");
    		position=position-22;
		}
		if(position == 67)
    	{
    		printf("ooH! Bitten by a snake!\n");
    		position=position-18;
		}
		if(position == 83)
    	{
    		printf("ooH! Bitten by a snake!\n");
    		position=position-3;
		}
		if(position == 92)
    	{
    		printf("ooH! Bitten by a snake!\n");
    		position=position-16;
		}
		if(position == 99)
    	{
    		printf("ooH! Bitten by a snake!\n");
    		position=position-94;
		}
		
		//position of players
		}
		if(f==1)
		{
		 _1st=position;
		 printf("Player 1 landed on %d\n",_1st);
		}
		if(f==2)
		{
		 _2nd=position;
		 printf("Player 2 landed on %d\n",_2nd);
		}
		if(f==3)
		{
		 _3rd=position;
		 printf("Player 3 landed on %d\n",_3rd);
		}
		if(f==4)
		{
		 _4th=position;
		 printf("Player 4 landed on %d\n",_4th);
		}

// win the player who reach 100 first
        if(_1st==100)
		{
		 printf("Player 1 won the game\n");
		 break;
		}	
		if(_2nd==100)
		{
		 printf("Player 2 won the game\n");
		 break;
		}
		if(_3rd==100)
		{
		 printf("Player 3 won the game\n");
		 break;
		}
		if(_4th==100)
		{
		 printf("Player 4 won the game\n");
		 break;
		}
		
		seat++;	   
	}
	
	printf("Game Over... Congratulations\n");
	
return 0;
	
}
// custom function for rolling the dice
int Rolling()
{
	scanf("%c",&n);
	if(n==10)
	{
		srand(time(0));
		d1=(rand()%6)+1;
	}
	printf("The dice tuned to be : %d\n",d1);
}

// custom function for 6 on dice
int Dice()
{
	while("game")
	{
		if(d1!=6 && d2!=6)
		break;
		while(1)
		{
			scanf("%c",&n);
			if(n==10)
			{
				d2=(rand()%6)+1;
				break;
			}
		}
		printf("The dice turned eo be :%d\n",d2);
		d1=d1+d2;
	}
}