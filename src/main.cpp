#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int **a;
char **b;

int main(){
    
    setlocate(LC_ALL, "Russian");
    srand(time(NULL));
    a = new int *[100];
    for (int i=0; i<101; i ++)
        a[i] = new int [100];
    b = new char *[100];
    for (int i=0; i<101; i ++)
        b[i] = new char [100];
    
    return 0;
}
