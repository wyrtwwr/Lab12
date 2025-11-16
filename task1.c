#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

 

int main() {
    setlocale(LC_ALL, "RUS");
    int *pi = 5;
    char* pc = "c";
    double *pd;

    printf("%lu\n", sizeof(pi));
    printf("%lu\n", sizeof(pc));
    printf("%lu\n", sizeof(pd));
}