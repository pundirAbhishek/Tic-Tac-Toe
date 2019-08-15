#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"Computer turn.h"
#include "Check.h"


int winner (int*count, char arr[][3]){
    int end=0;


if ((*count)>=5)
    {

    switch(1){

    case 1:
        if((arr[0][0]==arr[0][1])&&(arr[0][1]==arr[0][2])&&(arr[0][0]=='X')){
            printf("\nPlayer 1 won.");
            end=1;
            break;
            }
    case 2:
        if((arr[1][0]==arr[1][1])&&(arr[1][1]==arr[1][2])&&(arr[1][1]=='X')){
            printf("\nPlayer 1 won.");
            end=1;
            break;
        }
    case 3:
        if((arr[2][0]==arr[2][1])&&(arr[2][1]==arr[2][2])&&(arr[2][1]=='X'))  {
            printf("\nPlayer 1 won.");
            end=1;
            break;
        }

    case 4:
        if((arr[0][0]==arr[1][0])&&(arr[1][0]==arr[2][0])&&(arr[0][0]=='X')){
            printf("\nPlayer 1 won.");
            end=1;
            break;
        }

    case 5:
        if((arr[0][1]==arr[1][1])&&(arr[1][1]==arr[2][1])&&(arr[1][1]=='X')){
            printf("\nPlayer 1 won.");
            end=1;
            break;
        }

    case 6:
        if((arr[0][2]==arr[1][2])&&(arr[1][2]==arr[2][2])&&(arr[2][2]=='X')){
            printf("\nPlayer 1 won.");
            end=1;
            break;
        }

    case 7:
        if((arr[0][0]==arr[1][1])&&(arr[1][1]==arr[2][2])&&(arr[1][1]=='X')){
            printf("\nPlayer 1 won.");
            end=1;
            break;
        }

    case 8:
        if((arr[0][2]==arr[1][1])&&(arr[1][1]==arr[2][0])&&(arr[1][1]=='X')){
            printf("\nPlayer 1 won.");
            end=1;
            break;
        }




    switch(1){

    case 1:
         if((arr[0][0]==arr[0][1])&&(arr[0][1]==arr[0][2])&&(arr[0][0]=='O')){
            printf("\nPlayer 2 won.");
            end=1;
            break;
            }
    case 2:
        if((arr[1][0]==arr[1][1])&&(arr[1][1]==arr[1][2])&&(arr[1][1]=='O')){
            printf("\nPlayer 2 won.");
            end=1;
            break;
        }
    case 3:
         if((arr[2][0]==arr[2][1])&&(arr[2][1]==arr[2][2])&&(arr[2][1]=='O')){
            printf("\nPlayer 2 won.");
            end=1;
            break;
        }

    case 4:
         if((arr[0][0]==arr[1][0])&&(arr[1][0]==arr[2][0])&&(arr[0][0]=='O')){
            printf("\nPlayer 2 won.");
            end=1;
            break;
        }

    case 5:
       if((arr[0][1]==arr[1][1])&&(arr[1][1]==arr[2][1])&&(arr[1][1]=='O')){
            printf("\nPlayer 2 won.");
            end=1;
            break;
        }

    case 6:
        if((arr[0][2]==arr[1][2])&&(arr[1][2]==arr[2][2])&&(arr[2][2]=='O')){
            printf("\nPlayer 2 won.");
            end=1;
            break;
        }

    case 7:
       if((arr[0][0]==arr[1][1])&&(arr[1][1]==arr[2][2])&&(arr[1][1]=='O')){
            printf("\nPlayer 2 won.");
            end=1;
            break;
        }

    case 8:
         if((arr[0][2]==arr[1][1])&&(arr[1][1]==arr[2][0])&&(arr[1][1]=='O')){
            printf("\nPlayer 2 won.");
            end=1;
            break;
        }

    }

}

}
return end;
}


int main()
{
    int i,j,row,column ,toss,count=0,end;
    char ch1='X',ch2='O',arr[3][3];
    char player1[30],player2[30];

        printf("\nEnter the name of player 1:");
        gets(player1);

        printf("\nEnter the name of player 2:");
        gets(player2);

        for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++){
                    printf("\t");
                    arr[i][j]='-';
                }
                printf("\n");
            }


         for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++){
                    printf("\t");
                    printf("%c",arr[i][j]);
                }
                 printf("\n\n");
            }
        printf("\nPlayer 1 (%s) : X",player1);
        printf("\nPlayer 2 (%s) : O",player2);


      srand(time(NULL));
      toss=rand()%2;

        if(toss==1){
            printf("\n\nPlayer 1 got the first turn..");


        }
        else{
            printf("\n\nPlayer 2 got the first turn..");
            goto up1;
        }

         while(1){
         up:
         fflush(stdin);
         printf("\n\n\nPlayer 1");
         printf("\n\nEnter the row no where you want to insert .");
         scanf("%d",&row);
         printf("Enter the column no where you want to insert .");
         scanf("%d",&column);

            if((row>=1&&row<=3)&&(column>=1&&column<=3)){

                if (arr[row-1][column-1]=='-'){
                arr[row-1][column-1]='X';                count++;
                printf("\n");

                for(i=0;i<3;i++)
                {
                for(j=0;j<3;j++){
                    printf("\t");
                    printf("%c",arr[i][j]);
                }
                 printf("\n\n");
            }
            }
                else{
                printf("\nLocation already filled");
                goto up;

            }


         }
         else{
            printf("\n\nInvalid Value..");
            goto up;

         }
        end= winner(&count,arr);
         if(end==1){
            printf("\n\nGame Over..");
            break;

        }

        if(count==9&&end==0){
            printf("\n\nMatch Drawn...");
            printf("\n\nGame Over..\n");
            break;
         }


         up1:
         fflush(stdin);
         printf("\n\n\nPlayer 2");
         printf("\n\nEnter the row no where you want to insert .");
         scanf("%d",&row);
         printf("Enter the column no where you want to insert .");
         scanf("%d",&column);

            if((row>=1&&row<=3)&&(column>=0&&column<=3)){

                if (arr[row-1][column-1]=='-'){
                arr[row-1][column-1]='O';
                count++;
                printf("\n");

            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++){
                    printf("\t");
                    printf("%c",arr[i][j]);
                }
                 printf("\n\n");
            }
            }
                else{
                printf("\nLocation already filled");

                goto up1;
            }

         }
         else{
            printf("\n\nInvalid Value..");
            goto up1;

         }
       end= winner(&count,arr);
        if(end==1){
            printf("\n\nGame Over..");
            break;
        }
        if(count==9&&end==0){
            printf("\n\nMatch Drawn....");
            printf("\n\nGame Over..\n");
            break;
        }


         }
        return 0;
}

