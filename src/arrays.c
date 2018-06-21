#include <iostream>
#include "arrays.h"

using namespace std;

void Create_Mass(int **a, int n){
    for (int i=0; i<n+2; i++){
        for(int j=0; j<n; j++){
            a[i][j]=0;
        }
    }
}

void Create_Mass(char **b, int n){
    for (int i=0; i<n+2; i++){
        for (int j=0; j<n+2; j++){
            b[i][j]=' ';
        }
    }
    b[0][0]='X';
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
    cout « string(2*n, '=') « "|\n";
    for (int i = 1; i < n+1; i++){
        for (int j = 1; j < n+1; j++){
            printf("|");
            printf("%c", a[i][j]);
        }
        printf("|\n");
    }
    cout « string(2*n, '=') « "|\n";
}


