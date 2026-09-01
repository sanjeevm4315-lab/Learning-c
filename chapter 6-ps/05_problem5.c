#include <stdio.h>

int* sum(int a, int b)
{
    int c = a + b;
    int* ptr = &c;
    printf("The sum of a and b is %d\n", c);
    return ptr;
}

float* average(int a, int b)
{
    float c = (a + b) / 2.0;
    float* ptr = &c;
    printf("The average of a and b is %f\n", c);
    return ptr;
}

int main()
{
    int x = 4;
    int y = 6;
    int* ptr1;
    float* ptr2;

    ptr1 = sum(x, y);
    ptr2 = average(x, y);

    printf("The adress of sum is %u\n and average are %u\n", ptr1, ptr2);
    return 0;
}