#include <iostream>
#include "kursor.h"

using namespace std;

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
    cin >> n;
    if (n=='d'){
        if (c+1<p+1){
            b[z][c]=temp; 
            temp=b[z][c+1];
            b[z][c+1]='X';
        }
    }
    else Kursor(a, b, p, temp);
    if (n=='a'){
        if (c-1>0){
            b[z][c]=temp; 
            temp=b[z][c-1]; 
            b[z][c-1]='X';
        }
    }
    else Kursor(a, b, p, temp);        
    if (n=='w'){
        if (z-1>0){
            b[z][c]=temp; 
            temp=b[z-1][c]; 
            b[z-1][c]='X';
        }
    }
    else Kursor(a, b, p, temp);
    if (n=='s'){
        if (z+1<p+1){
            b[z][c]=temp;
            temp=b[z+1][c]; 
            b[z+1][c]='X';
        }
    }
    else Kursor(a, b, p, temp);
    if (n=='f'){
        if (a[z][c]==0){
            temp='0';
        }
        if (a[z][c]==1){
            temp='1';
        }
        if (a[z][c]==2){
            temp='2';
        }
        if (a[z][c]==3){
            temp='3';
        }
        if (a[z][c]==4){
            temp='4';
        }
        if (a[z][c]==5){
            temp='5';
        }
        if (a[z][c]==6){
            temp='6';
        }
        if (a[z][c]==7){
            temp='7';
        }
        if (a[z][c]==8){
            temp='8';
        }
        if (a[z][c]==9){
            temp='9';
        }
    }
}
