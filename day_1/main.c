#include <stdlib.h>
#include <stdio.h>

int compare (const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int list_a[] = {3, 4, 2, 1, 3, 3};
    int list_b[] = {4, 3, 5, 3, 9, 3};

    int length = sizeof(list_a)/sizeof(list_a[0]);

    qsort(list_a, length, sizeof(int), compare);
    qsort(list_b, length, sizeof(int), compare);

    int distance = 0;

    for (int i = 0; i < length; i++)
    {
        distance += abs(list_a[i] - list_b[i]);
    }

    printf("%d\n", distance);

    return 0;
}