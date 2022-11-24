#include <stdio.h>

#define MAX_SIZE 100

void main()
{
    int arr[MAX_SIZE];
    int i, max, min, size;

    printf("Enter size of the array:\t");
    scanf("%d", &size);

    printf("Enter Elements in the array:\n");

    for (i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Maximum number =%d\n", max);
    printf("Minimum number =%d\n", min);
}