#include <stdio.h>
#include <stdlib.h>

void printArray(int *numbers, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d) %d\n", i + 1, numbers[i]);
    }
    printf("\n");
}

int main()
{
    const int length = 5;

    int v[5] = {1, 2, 3, 4, 5};

    int *p = v;

    printArray(v, length);
    printArray(p, length);

    return 0;
}
