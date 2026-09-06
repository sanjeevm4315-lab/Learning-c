#include <stdio.h>

int main(){
    //POINTER ARITHEMATIC USING INTEGER PINTER 
    //int a =5;
    // int *ptr = &a;
    // printf("The adress of a is %u\n", &a);
    // printf("The adress of a is %u\n", ptr);
    // ptr++;
    // printf("The adress of a is %u\n", ptr);

    //POINTER ARITHEMATIC USING CHARACTER POINTER
    char a = 'A';
    char *ptr = &a;
    printf("The adress of a is %u\n", &a);
    printf("The adress of a is %u\n", ptr);
    ptr++;
    printf("The adress of a is %u\n", ptr); 


    return 0;
}