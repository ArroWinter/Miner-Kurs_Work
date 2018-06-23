#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "starter.h"

int **a, end;
char **b;

int main(){
    srand(time(NULL));
    a = new int *[100];
    for (int i=0; i<101; i ++)
        a[i] = new int [100];
    b = new char *[100];
    for (int i=0; i<101; i ++)
        b[i] = new char [100];
    Starter();
    return 0;
}
