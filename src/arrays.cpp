#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"



void Create_MassI(int **a, int n){
    for (int i=0; i<n+2; i++){
        for(int j=0; j<n+2; j++){
            a[i][j]=0;
        }
    }
}

void Create_MassC(char **b, int n){
    for (int i=0; i<n+2; i++){
        for (int j=0; j<n+2; j++){
            b[i][j]=' ';
        }
    }
    b[1][1]='X';
}

void Bomber(int **a, int n){
    int x,y;
    for (int i=0; i<n; i++){
        x=rand()%(n-1) +1;
        y=rand()%(n-1) +1;
        if (a[x][y]!=9) a[x][y]=9; else i--;
    }
}

void PrintMas(char **a, int n){
    system("CLS");
    for (int k = 0; k < 2*n; k++){
        printf("=");
    }
    printf("|\n");
    for (int i = 1; i < n+1; i++){
        for (int j = 1; j < n+1; j++){
            printf("|");
            printf("%c", a[i][j]);
        }
        printf("|\n");
    }
    for (int k = 0; k < 2*n; k++){
        printf("=");
    }
}

void Search_Bomb(int **a, int n){
    for (int i = 1; i <=n; i++){
        for (int j = 1; j <=n; j++){
            if (a[i][j]!=9){
                if (a[i+1][j-1]==9){
                    a[i][j]++;
                }
                if (a[i+1][j]==9){
                    a[i][j]++;
                }
                if (a[i+1][j+1]==9){
                    a[i][j]++;
                }
                if (a[i][j-1]==9){
                    a[i][j]++;
                }
                if (a[i][j+1]==9){
                    a[i][j]++;
                }
                if (a[i-1][j-1]==9){
                    a[i][j]++;
                }
                if (a[i-1][j]==9){
                    a[i][j]++;
                }
                if (a[i-1][j+1]==9){
                    a[i][j]++;
                }
            }
        }
    }
}


