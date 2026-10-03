#include <stdio.h>

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};

    int *start = &numbers[1];
    int *end = &numbers[4];

    printf("Value at start pointer = %d\n", *start);
    printf("Value at end pointer = %d\n", *end);

    printf("Number of elements between pointers = %ld\n", end - start);

    return 0;
}
