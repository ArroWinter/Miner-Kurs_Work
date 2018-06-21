#include <iostream>
#include "arrays.h"

using namespace std;

void Create_Mass(int **a, int n){
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            a[i][j]=0;
        }
    }
}

void Create_Mass(char **b, int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            b[i][j]=' ';
        }
    }
    b[0][0]='X';
}
