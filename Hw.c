#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "RUS");
    double arr[2]; 
   
    long size = (char*)(&arr[1]) - (char*)(&arr[0]);
    printf("Размер типа double: %ld байт(а)\n", size);
    return 0;
}