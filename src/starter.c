#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "arrays.h"

using namespace std;

void Starter(){
    int size, bombs;
    cout « "Введите размер поля не более 100x100(Пример: 10 => поле будет 10х10): ";
    cin » size ;
    cout « "Введите количество бомб: ";
    cin » bombs;
    Create_Mass(a, size);
    Create_Mass(b, size);
    Bomber(a, bombs);
    Search_Bomb(a, size);
    PrintMas(b, size);
}

