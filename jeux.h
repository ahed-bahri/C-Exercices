#ifndef JEUX_H_INCLUDED
#define JEUX_H_INCLUDED

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include "myconio.h"


//inputValue is Variable and "myDataType" is Type

struct myDataType{
    int i;
    char ch;
}inputValue();

void run();
int check(char sym[9],char ch,int count);
void Display(char sym[9]);

void done(){
    char reStart;
    //The goto statement allows us to transfer control of the program to the specified label.
    again:
	run();
	textcolor(BLUE);
	printf("\n\n If You Want To Play Again Press ==> 1 : \n\n Or Else Any Key:");
	scanf("%s",&reStart);
	if(reStart == '1')
        {
            system("cls");
            goto again;
        }
  //  else
   //     exit(0);
}

void run(){
    // el count bech t9olék haw mara X w mara O, init lel 0
    int count = 0;
    struct myDataType info;
    char symbol[9] = {'1','2','3','4','5','6','7','8','9'};
    Display(symbol);
    again:
    //tekhw el input eli dkhaltw
    info = inputValue(symbol,count);
    //bech yé5w éli input éli dkhltw w yaffichih al ecran
    symbol[info.i] = info.ch;
    system("cls");
    Display(symbol);
    if( check(symbol,info.ch,count)== 1 );
    else{

        count++;
        goto again;
    }
}

int check(char sym[9],char ch,int count){
    int i;
            /* Si X X X */
    for(i = 0;i<=6; i+=3)
        if(sym[i] == ch && sym[i+1]==ch && sym[i+2]==ch){
           textcolor(GREEN);
            printf(" \n the Winner is : %c",ch);
            return 1;
        }
        /*
        X
        X
        X
        */
    for(i = 0;i<3; i++)
        if(sym[i]==ch && sym[i+3]==ch&&sym[i+6]==ch){
                textcolor(GREEN);
            printf("\n the Winner is : %c",ch);
            return 1;
        }
        /*
        si
        X
            X
                X
        */
    if(sym[0]==ch && sym[4]==ch&&sym[8]==ch){
            textcolor(GREEN);
            printf("\n the Winner is : %c",ch);
            return 1;
        }

        /*
            Si
                        X
                    X
                X

        */
    else if(sym[2]==ch && sym[4]==ch && sym[6]==ch){
            textcolor(GREEN);
            printf("\n the Winner is : %c",ch);
            return 1;
        }
        //Total est 8 tout les cases sont remplies
    else if(count==8){
       textcolor(BLUE);
        printf("\n the Game is DRAW");
        return 1;

    }else
        return 0;
}
struct myDataType inputValue(char sym[9],int count){
    char value;
    int i;
    struct myDataType info;
    inputAgain:
        //si pair x commence
    if(count%2 == 0){
            textcolor(RED);
        printf("\nEnter Your Choice X :");
    }
    else{
        //si impair O commence
        textcolor(RED);
        printf("\nEnter Your Choice O :");
    }
    scanf("%s",&value);
    for(i=0;i<9;i++){
        if(value == sym[i]){
                //bech yekhw el input eli dkhltw
            info.i = i;
            //affichage dans le tableau pour X
            if(count%2 == 0)
                info.ch = 'X';
            else
                info.ch = 'O';
            break;
        }else{
            info.i = -1;
            info.ch = ' ';
        }
    }
    if(info.i == -1){
        printf("\nInput is not Valid");
        goto inputAgain;
    }
    return info;
}

void Display(char sym[9])
    {
    textcolor(RED);
	printf("\t\t\t\tT i c	t a c	t o e");
    textcolor(BLACK);
	printf("\nPlayers 1 Symbol: X");
	printf("\nPlayers 2 Symbol: O");
	printf("\n\t\t\t       |       |       ");
	printf("\n\t\t\t   %c   |   %c   |   %c   ",sym[0],sym[1],sym[2]);
	printf("\n\t\t\t-------|-------|-------");
	printf("\n\t\t\t   %c   |   %c   |   %c   ",sym[3],sym[4],sym[5]);
	printf("\n\t\t\t-------|-------|-------");
	printf("\n\t\t\t   %c   |   %c   |   %c   ",sym[6],sym[7],sym[8]);
	printf("\n\t\t\t       |       |       ");

    }



#endif // JEUX_H_INCLUDED
