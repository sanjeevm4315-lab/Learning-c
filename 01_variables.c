#include <stdio.h>

int main(){
    int i = 10;
    int j = i ;
    int a = 1, b = 2, c = 3,d = 4;
    //%d is called a format specifier. 
    //%d is for int,%f is for float, %c is for char, %s is for string
    printf("The value of i is %d and the value of j is %d\n", i, j);
    printf("The value of a is %d, b is %d, c is %d, and d is %d\n", a, b, c, d);
    return 0;
}