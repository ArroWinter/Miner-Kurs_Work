#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"
#include "kursor.h"

int Starter(){
    int size, bombs, flags, r;
    char temp=' ';
    Print_Keys;
    printf("Enter the field size not more than 100x100(For example: 10 => field will be 10x10): ");
    scanf("%d", &size);
    printf("Enter the number of bombs: ");
    scanf("%d", &bombs);
    flags=bombs;
    printf("\n\n");
    Create_Mass(a, size);
    Create_Mass(b, size);
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
}
