# Домашнее задание к работе 12
## Условие задачи

Напишите программу, которая вычисляет размер типа данных short int в байтах.

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
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	short int short_arr[2];
	printf("размер типа данных short int в байтах: %ld\n", (char*)(&short_arr[1]) - (char*)(&short_arr[0]));
	return 0;
}
```


## 3. Результаты работы программы

```
Размер типа double: 8 байт(а)
```


<img width="568" height="104" alt="image" src="https://github.com/user-attachments/assets/b1a6a90f-397d-4420-b7fa-0f975a436bad" />

