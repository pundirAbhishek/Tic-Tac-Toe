int check(int *row,int *column,char arr[][3])
{
    int end=0;

    {

        switch(1){

    case 1:
        if((arr[0][0]=='O')&&(arr[0][1]=='O')&&(arr[0][2]=='-')){
            *row=1;
            *column=3;
            end=1;
            break;
            }
    case 2:
        if((arr[0][0]=='O')&&(arr[0][1]=='-')&&(arr[0][2]=='O')){
            *row=1;
            *column=2;
            end=1;
            break;
            }
    case 3:
        if((arr[0][0]=='-')&&(arr[0][1]=='O')&&(arr[0][2]=='O')){
            *row=1;
            *column=1;
            end=1;
            break;
            }
    case 4:
        if((arr[1][0]=='O')&&(arr[1][1]=='O')&&(arr[1][2]=='-')){
            *row=2;
            *column=3;
            end=1;
             break;
        }

    case 5:
        if((arr[1][0]=='O')&&(arr[1][1]=='-')&&(arr[1][2]=='O')){
            *row=2;
            *column=2;
            end=1;
             break;
        }
    case 6:
        if((arr[1][0]=='-')&&(arr[1][1]=='O')&&(arr[1][2]=='O')){
            *row=2;
            *column=1;
            end=1;
             break;
        }

    case 7:
        if((arr[2][0]=='O')&&(arr[2][1]=='O')&&(arr[2][2]=='-'))  {
            *row=3;
            *column=3;
            end=1;
            break;
        }

    case 8:
        if((arr[2][0]=='O')&&(arr[2][1]=='-')&&(arr[2][2]=='O'))  {
            *row=3;
            *column=2;
            end=1;
            break;
        }

    case 9:
        if((arr[2][0]=='-')&&(arr[2][1]=='O')&&(arr[2][2]=='O'))  {
            *row=3;
            *column=1;
            end=1;
            break;
        }



    case 10:
        if((arr[0][0]=='O')&&(arr[1][0]=='O')&&(arr[2][0]=='-')){
            *row=3;
            *column=1;
            end=1;
            break;
        }

    case 11:
        if((arr[0][0]=='O')&&(arr[1][0]=='-')&&(arr[2][0]=='O')){
            *row=2;
            *column=1;
            end=1;
            break;
        }


    case 12:
        if((arr[0][0]=='-')&&(arr[1][0]=='O')&&(arr[2][0]=='O')){
            *row=1;
            *column=1;
            end=1;
            break;
        }


    case 13:
        if((arr[0][1]=='O')&&(arr[1][1]=='O')&&(arr[2][1]=='-')){
            *row=3;
            *column=2;
            end=1;
             break;
        }

    case 14:
        if((arr[0][1]=='O')&&(arr[1][1]=='-')&&(arr[2][1]=='O')){
            *row=2;
            *column=2;
            end=1;
             break;
        }

    case 15:
        if((arr[0][1]=='-')&&(arr[1][1]=='O')&&(arr[2][1]=='O')){
            *row=1;
            *column=2;
            end=1;
             break;
        }


    case 16:
        if((arr[0][2]=='O')&&(arr[1][2]=='O')&&(arr[2][2]=='-')){
            *row=3;
            *column=3;
            end=1;
            break;
        }

    case 17:
        if((arr[0][2]=='O')&&(arr[1][2]=='-')&&(arr[2][2]=='O')){
            *row=2;
            *column=3;
            end=1;
            break;
        }

    case 18:
        if((arr[0][2]=='-')&&(arr[1][2]=='O')&&(arr[2][2]=='O')){
            *row=1;
            *column=3;
            end=1;
            break;
        }


    case 19:
        if((arr[0][0]=='O')&&(arr[1][1]=='O')&&(arr[2][2]=='-')){
            *row=3;
            *column=3;
            end=1;
             break;
        }
    case 20:
        if((arr[0][0]=='O')&&(arr[1][1]=='-')&&(arr[2][2]=='O')){
            *row=2;
            *column=2;
            end=1;
             break;
        }
    case 21:
        if((arr[0][0]=='-')&&(arr[1][1]=='O')&&(arr[2][2]=='O')){
            *row=1;
            *column=1;
            end=1;
             break;
        }

    case 22:
        if((arr[0][2]=='O')&&(arr[1][1]=='O')&&(arr[2][0]=='-')){
            *row=3;
            *column=1;
            end=1;
            break;
        }

     case 23:
        if((arr[0][2]=='O')&&(arr[1][1]=='-')&&(arr[2][0]=='O')){
            *row=2;
            *column=2;
            end=1;
            break;
        }


     case 24:
        if((arr[0][2]=='-')&&(arr[1][1]=='O')&&(arr[2][0]=='O')){
            *row=1;
            *column=3;
            end=1;
            break;
        }
}

if(end==1)
{
    return end;
}

    switch(1){

    case 1:
        if((arr[0][0]=='X')&&(arr[0][1]=='X')&&(arr[0][2]=='-')){
            *row=1;
            *column=3;
            end=1;
            break;
            }
    case 2:
        if((arr[0][0]=='X')&&(arr[0][1]=='-')&&(arr[0][2]=='X')){
            *row=1;
            *column=2;
            end=1;
            break;
            }
    case 3:
        if((arr[0][0]=='-')&&(arr[0][1]=='X')&&(arr[0][2]=='X')){
            *row=1;
            *column=1;
            end=1;
            break;
            }
    case 4:
        if((arr[1][0]=='X')&&(arr[1][1]=='X')&&(arr[1][2]=='-')){
            *row=2;
            *column=3;
            end=1;
             break;
        }

    case 5:
        if((arr[1][0]=='X')&&(arr[1][1]=='-')&&(arr[1][2]=='X')){
            *row=2;
            *column=2;
            end=1;
             break;
        }
    case 6:
        if((arr[1][0]=='-')&&(arr[1][1]=='X')&&(arr[1][2]=='X')){
            *row=2;
            *column=1;
            end=1;
             break;
        }

    case 7:
        if((arr[2][0]=='X')&&(arr[2][1]=='X')&&(arr[2][2]=='-'))  {
            *row=3;
            *column=3;
            end=1;
            break;
        }

    case 8:
        if((arr[2][0]=='X')&&(arr[2][1]=='-')&&(arr[2][2]=='X'))  {
            *row=3;
            *column=2;
            end=1;
            break;
        }

    case 9:
        if((arr[2][0]=='-')&&(arr[2][1]=='X')&&(arr[2][2]=='X'))  {
            *row=3;
            *column=1;
            end=1;
            break;
        }



    case 10:
        if((arr[0][0]=='X')&&(arr[1][0]=='X')&&(arr[2][0]=='-')){
            *row=3;
            *column=1;
            end=1;
            break;
        }

    case 11:
        if((arr[0][0]=='X')&&(arr[1][0]=='-')&&(arr[2][0]=='X')){
            *row=2;
            *column=1;
            end=1;
            break;
        }


    case 12:
        if((arr[0][0]=='-')&&(arr[1][0]=='X')&&(arr[2][0]=='X')){
            *row=1;
            *column=1;
            end=1;
            break;
        }


    case 13:
        if((arr[0][1]=='X')&&(arr[1][1]=='X')&&(arr[2][1]=='-')){
            *row=3;
            *column=2;
            end=1;
             break;
        }

    case 14:
        if((arr[0][1]=='X')&&(arr[1][1]=='-')&&(arr[2][1]=='X')){
            *row=2;
            *column=2;
            end=1;
             break;
        }

    case 15:
        if((arr[0][1]=='-')&&(arr[1][1]=='X')&&(arr[2][1]=='X')){
            *row=1;
            *column=2;
            end=1;
             break;
        }


    case 16:
        if((arr[0][2]=='X')&&(arr[1][2]=='X')&&(arr[2][2]=='-')){
            *row=3;
            *column=3;
            end=1;
            break;
        }

    case 17:
        if((arr[0][2]=='X')&&(arr[1][2]=='-')&&(arr[2][2]=='X')){
            *row=2;
            *column=3;
            end=1;
            break;
        }

    case 18:
        if((arr[0][2]=='-')&&(arr[1][2]=='X')&&(arr[2][2]=='X')){
            *row=1;
            *column=3;
            end=1;
            break;
        }


    case 19:
        if((arr[0][0]=='X')&&(arr[1][1]=='X')&&(arr[2][2]=='-')){
            *row=3;
            *column=3;
            end=1;
             break;
        }
    case 20:
        if((arr[0][0]=='X')&&(arr[1][1]=='-')&&(arr[2][2]=='X')){
            *row=2;
            *column=2;
            end=1;
             break;
        }
    case 21:
        if((arr[0][0]=='-')&&(arr[1][1]=='X')&&(arr[2][2]=='X')){
            *row=1;
            *column=1;
            end=1;
             break;
        }

    case 22:
        if((arr[0][2]=='X')&&(arr[1][1]=='X')&&(arr[2][0]=='-')){
            *row=3;
            *column=1;
            end=1;
            break;
        }

     case 23:
        if((arr[0][2]=='X')&&(arr[1][1]=='-')&&(arr[2][0]=='X')){
            *row=2;
            *column=2;
            end=1;
            break;
        }


     case 24:
        if((arr[0][2]=='-')&&(arr[1][1]=='X')&&(arr[2][0]=='X')){
            *row=1;
            *column=3;
            end=1;
            break;
        }


}
return end;

}
}

