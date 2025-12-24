# Домашнее задание к работе 12
## Условие задачи

Напишите программу, которая вычисляет размер основных типов данных в байтах:
1) double

## 1. Алгоритм и блок-схема
## Алгоритм
```
1. Начало.
2. Инициализируем массив short_arr[2];
3. printf("размер типа данных short int в байтах: %ld\n", (char*)(&short_arr[1]) - (char*)(&short_arr[0]));
4. Возвращаем 0;
5. Конец.
   ```
### Блок-схема
<img width="321" height="418" alt="image" src="https://github.com/user-attachments/assets/8bd3c59f-2587-4d3a-a424-797569809b3c" />


## 2. Реализация программы

```
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

```


## 3. Результаты работы программы

```
Размер типа double: 8 байт(а)
```


<img src="https://github.com/wyrtwwr/Lab12/blob/main/LAB112_PROG.jpg" width="981" height="266">
