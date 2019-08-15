#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Computer_turn(int *count,char arr[][3])
{
    int comp_turn,row,column;


     select:
     if(*count==0)
     {

        srand(time(NULL));
        row=rand()%3+1;
        srand(time(NULL));

       if(rand()%2)
       {
          column=row;
       }

       else
       {
           if(row==1)
           {
               column=3;
           }
           else if(row==3)
           {

               column=1;
           }
           else
           {
              row=3;
              column=1;
           }
       }
        if(arr[row-1][column-1]=='-')
        {
        arr[row-1][column-1]='O';
        }
        else {
            goto select;
     }      }

     else if(*count>=1)
     {

        if(*count>=3){
            comp_turn =check(&row,&column,arr);
                if(comp_turn==1)
                {
                    arr[row-1][column-1]='O';
                    winner(&count,arr);
                    return;
                }
                else
                {



                }
        }
         else
         {


         }
         if(10>9)
            if(arr[1][1]=='-'){
                    arr[1][1]='X';

            }
            else
            {
                    select1:
                    srand(time(NULL));
                    row=rand()%3+1;
                    srand(time(NULL));

                   if(row==2){
                    goto select1;
                   }

                    if(rand()%2)
                    {
                        column=row;

                    }
                    else {

                        if(row==1)
                        {
                            column=3;

                        }
                        else if(row==3)
                        {

                            column=1;
                        }
                        else
                        {
                            row=3;
                            column=1;
                        }
                }
                if(arr[row-1][column-1]=='-')
        {
        arr[row-1][column-1]='O';
        winner(&count,arr);
        }
        else goto select;

            }
        }
}

     /*


    if(comp_turn==0)
    {
        select:
        *row=rand()%3 + 1;
        *column = rand()%3 + 1;

        if(arr[*row-1][*column-1]=='-'){
                comp_turn=1;
                arr[*row-1][*column-1]='O';
                *count++;

        }
        else
            goto select;
    }

    else
    {


    }
}
          */
