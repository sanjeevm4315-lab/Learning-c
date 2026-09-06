#include <stdio.h>

int main()
{
    int marks[90];//Reserve space for 90 integers   
    marks[0] = 45;
    marks[1] = 95;
    //We can go all the way till marks[89]
    printf("The marks of 0 and 1 is %d and %d\n", marks[0], marks[1]);
    return 0;
}