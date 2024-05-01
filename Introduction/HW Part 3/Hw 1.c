#include <stdio.h>

// Задача 1. Напишите псевдокод по блок-схеме
// Найти среднее арифметическое среди всех элементов массива [2, 5,
// 13, 7, 6, 4]

#define X 6

int arr [X] = {2, 5, 13, 7, 6, 4};
float result;

int AvgSumm (void)
{
    for (int i = 0; i < X; i++)
    {
        result += arr [i];
    }
    result = result / X;
    printf("Average result = %f", result);
    return 0;
}

int main (void)
{
    AvgSumm();
    scanf("%d");
    return 0;
}