#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"
#include "kursor.h"

int Starter(){
    int size, bombs, flags, r, **a, end;
    char **b, temp=' ';
    Print_Keys();
    printf("Enter the field size (For example: 10 => field will be 10x10): ");
    scanf("%d", &size);
    a = new int *[size+2];
    for (int i=0; i<size+2; i ++)
        a[i] = new int [size+2];
    b = new char *[size+2];
    for (int i=0; i<size+2; i ++)
        b[i] = new char [size+2];
    printf("Enter the number of bombs(Not more than field size): ");
    scanf("%d", &bombs);
    if (bombs>=size*size){
        printf("Input error! Restart game!");
        return 0;
    } 
    flags=bombs;
    printf("\n\n");
    Create_MassI(a, size);
    Create_MassC(b, size);
    Bomber(a, bombs);
    Search_Bomb(a, size);
    PrintMas(b, size);
    while(1){
        Kursor(a, b, size, temp, flags, end);
        PrintMas(b, size);
        if (temp=='9'){
            for (int i=1; i<size+1; i++){
                for (int j=1; j<size+1; j++){
                    if (a[i][j]==9) b[i][j]='*';
                }
            }
            PrintMas(b, size);
            printf("\nGame over! You exploded!\n");
            printf("\nPlay again?\n");
            printf("1 - Yes");
            printf("\n2 - No\n");
            scanf("%d", &r);
            switch(r){
                case 1: Starter(); break;
                case 2: return 0; break;
                default: printf("\nInputing Error, Open the game again if you want play again!\n");
            }
        }
        if (end==bombs){
            printf("\nVictory! You have defused all the bombs!\n");
            printf("\nPlay again?\n");
            printf("1 - Yes");
            printf("\n2 - No\n");
            scanf("%d", &r);
            switch(r){
                case 1: Starter(); break;
                case 2: return 0; break;
                default: printf("\nInputing Error, Open the game again if you want play again!\n");
            }
        }
    }
    free(a);
    free(b);
}
