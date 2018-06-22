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
}
