/*  Develop a C program that simulates a matchstick game between the user and the
    computer. The objective of the game is to avoid picking the last matchstick. The
    program should ensure that the computer always wins by strategically picking
    matchsticks. The game starts with 21 matchsticks. The user and the computer take
    turns to pick 1, 2, 3, or 4 matchsticks. The player forced to pick the last matchstick
    loses the game.
    Rules:
    1. The game starts with 21 matchsticks.
    2. The user is asked to pick 1, 2, 3, or 4 matchsticks.
    3. After the user picks, the computer makes its pick.
    4. The player who is forced to pick the last matchstick loses the game*/
#include<stdio.h>
void main()
{
    int matchsticks=21,Flag_End=1,Flag_Input=0,option;
    printf("\n Toatal matchsticks is : %d",matchsticks);
    while(Flag_End!=0)
    {
        while (Flag_Input==0)
        {
            printf("\n\n-------------------");
            printf("\n|1|Coose 1 sticks .");
            printf("\n|2|Coose 2 sticks .");
            printf("\n|3|Coose 3 sticks .");
            printf("\n|4|Coose 4 sticks .");
            printf("\n-------------------");
            printf("\n\n choose one of these matchsticks number :");
            scanf("%d",&option);
            if(option>4 || option<0)
            {
                printf("\n'IT IS INVALID INPUT'");
                Flag_Input=0;
            }
            else
            {
                Flag_Input=1;
            }
        }

        Flag_Input=0;

        printf("\n\n------------------------------");
        printf("\n--Copmuter's sticks is : %d --",5-option);
        printf("\n-------------------------------");
        matchsticks-=5;
        printf("\n\n After sticks selaction total sticks is '%d'",matchsticks);
        if(matchsticks==1)
        {
            printf("\n\n NOW IT'S YOUR TURN ::");
            printf("\n\n---------------------------------");
            printf("\n ****So you 'LOST this game' *****");
            printf("\n----------------------------------");
            Flag_End=0;
        }
    }
    printf("\n\n Name : LAKHANI MANAV PARESHBHAI ");
    printf("\n Student I'd : 24TCELIK ");
    
}