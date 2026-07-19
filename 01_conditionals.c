#include <stdio.h>

int main(){
    int a = 15;

    if(a>10){
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");


        if(a%5==0){
        printf("We are inside if\n");
        printf("Your age is divisible by 5\n");
        }

    } 
    return 0;
}