#include <stdio.h>
void main()
{
    int arr[5];
    int sum = 0, count = 0, i;
    float avg;

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    avg = (float)sum / 5;

    for (int i = 0; i < 5; i++)
        ;
    if (arr[i] > avg)
    {
        count++;
    }
    printf("Average:%d", avg);
    printf("Count of numbers higher than average: %d\n", count);
}