#include <stdio.h>

#define X 6

int arr [X] = {2, 5, 13, 7, 6, 4};

int i, Max, Min;

int main (void)
{

    for (i = 0; i < X; i++)
    {
        if (arr[Min] > arr[i])
         {
            Min = i;
         }
        if (arr[Max] < arr[i])
         {
            Max = i;
         }
    }

   printf("Min index = %d, Max index = %d", Min, Max);
   scanf("%d");
   
   return 0;
}