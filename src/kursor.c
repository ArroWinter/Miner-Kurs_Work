#include <iostream>
#include "kursor.h"

using namespace std;

void Kursor(int **a, char **b, int p){
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
        }
    }
    if (n=='a'){
        if (c-1>0){
        }
    }        
    if (n=='w'){
        if (z-1>0){
        }
    }
    if (n=='s'){
        if (z+1<p+1){
        }
    }
}
