#include <stdio.h>
#include <stdlib.h>
#include "kursor.h"

void Zero(int **a, char **b, int z, int c){
    if ((a[z+1][c]==0)&&(b[z+1][c]!='P')) b[z+1][c]='0';
    if ((a[z+1][c]==1)&&(b[z+1][c]!='P')) b[z+1][c]='1';
    if ((a[z+1][c]==2)&&(b[z+1][c]!='P')) b[z+1][c]='2';
    if ((a[z+1][c]==3)&&(b[z+1][c]!='P')) b[z+1][c]='3';
    if ((a[z+1][c]==4)&&(b[z+1][c]!='P')) b[z+1][c]='4';
    if ((a[z+1][c+1]==0)&&(b[z+1][c+1]!='P')) b[z+1][c+1]='0';
    if ((a[z+1][c+1]==1)&&(b[z+1][c+1]!='P')) b[z+1][c+1]='1';
    if ((a[z+1][c+1]==2)&&(b[z+1][c+1]!='P')) b[z+1][c+1]='2';
    if ((a[z+1][c+1]==3)&&(b[z+1][c+1]!='P')) b[z+1][c+1]='3';
    if ((a[z+1][c+1]==4)&&(b[z+1][c+1]!='P')) b[z+1][c+1]='4';
    if ((a[z+1][c-1]==0)&&(b[z+1][c-1]!='P')) b[z+1][c-1]='0';
    if ((a[z+1][c-1]==1)&&(b[z+1][c-1]!='P')) b[z+1][c-1]='1';
    if ((a[z+1][c-1]==2)&&(b[z+1][c-1]!='P')) b[z+1][c-1]='2';
    if ((a[z+1][c-1]==3)&&(b[z+1][c-1]!='P')) b[z+1][c-1]='3';
    if ((a[z+1][c-1]==4)&&(b[z+1][c-1]!='P')) b[z+1][c-1]='4';
    if ((a[z-1][c]==0)&&(b[z-1][c]!='P')) b[z-1][c]='0';
    if ((a[z-1][c]==1)&&(b[z-1][c]!='P')) b[z-1][c]='1';
    if ((a[z-1][c]==2)&&(b[z-1][c]!='P')) b[z-1][c]='2';
    if ((a[z-1][c]==3)&&(b[z-1][c]!='P')) b[z-1][c]='3';
    if ((a[z-1][c]==4)&&(b[z-1][c]!='P')) b[z-1][c]='4';
    if ((a[z-1][c+1]==0)&&(b[z-1][c+1]!='P')) b[z-1][c+1]='0';
    if ((a[z-1][c+1]==1)&&(b[z-1][c+1]!='P')) b[z-1][c+1]='1';
    if ((a[z-1][c+1]==2)&&(b[z-1][c+1]!='P')) b[z-1][c+1]='2';
    if ((a[z-1][c+1]==3)&&(b[z-1][c+1]!='P')) b[z-1][c+1]='3';
    if ((a[z-1][c+1]==4)&&(b[z-1][c+1]!='P')) b[z-1][c+1]='4';
    if ((a[z-1][c-1]==0)&&(b[z-1][c-1]!='P')) b[z-1][c-1]='0';
    if ((a[z-1][c-1]==1)&&(b[z-1][c-1]!='P')) b[z-1][c-1]='1';
    if ((a[z-1][c-1]==2)&&(b[z-1][c-1]!='P')) b[z-1][c-1]='2';
    if ((a[z-1][c-1]==3)&&(b[z-1][c-1]!='P')) b[z-1][c-1]='3';
    if ((a[z-1][c-1]==4)&&(b[z-1][c-1]!='P')) b[z-1][c-1]='4';
    if ((a[z][c+1]==0)&&(b[z][c+1]!='P')) b[z][c+1]='0';
    if ((a[z][c+1]==1)&&(b[z][c+1]!='P')) b[z][c+1]='1';
    if ((a[z][c+1]==2)&&(b[z][c+1]!='P')) b[z][c+1]='2';
    if ((a[z][c+1]==3)&&(b[z][c+1]!='P')) b[z][c+1]='3';
    if ((a[z][c+1]==4)&&(b[z][c+1]!='P')) b[z][c+1]='4';
    if ((a[z][c-1]==0)&&(b[z][c-1]!='P')) b[z][c-1]='0';
    if ((a[z][c-1]==1)&&(b[z][c-1]!='P')) b[z][c-1]='1';
    if ((a[z][c-1]==2)&&(b[z][c-1]!='P')) b[z][c-1]='2';
    if ((a[z][c-1]==3)&&(b[z][c-1]!='P')) b[z][c-1]='3';
    if ((a[z][c-1]==4)&&(b[z][c-1]!='P')) b[z][c-1]='4';
}

void Kursor(int **a, char **b, int p, char &temp){
    int z, c;
    char n;
    for (int i=0; i<=p; i++){
        for (int j=0; j<=p; j++){
            if (b[i][j]=='X'){
                z=i;
                c=j;
            }
        }
    }
    scanf("%c", &n);
    switch(n){
        case 'd' : if (c+1<p+1){ b[z][c]=temp; temp=b[z][c+1]; b[z][c+1]='X';} else Kursor(a, b, p, temp); break;
        case 'a' : if (c-1>0){ b[z][c]=temp; temp=b[z][c-1]; b[z][c-1]='X';} else Kursor(a, b, p, temp); break;
        case 'w' : if (z-1>0){ b[z][c]=temp; temp=b[z-1][c]; b[z-1][c]='X';} else Kursor(a, b, p, temp); break;
        case 's' : if (z+1<p+1){ b[z][c]=temp; temp=b[z+1][c]; b[z+1][c]='X';} else Kursor(a, b, p, temp, flags, end); break;
        case 'f' : switch(a[z][c]){
                       case 0 : temp='0'; Zero(a, b, z, c); break;
                       case 1 : temp='1'; break;
                       case 2 : temp='2'; break;
                       case 3 : temp='3'; break;
                       case 4 : temp='4'; break;
                       case 5 : temp='5'; break;
                       case 6 : temp='6'; break;
                       case 7 : temp='7'; break;
                       case 8 : temp='8'; break;
                       case 9 : temp='9'; break;
                   } break;
    }
}
