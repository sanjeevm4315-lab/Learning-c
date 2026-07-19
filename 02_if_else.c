#include <stdio.h>

int main(){
    int age = 17;    
    
    if(age>18){
        printf("We are inside if\n");
        printf("Your age is greater than 18\n");
    } else {
        printf("We are inside else\n");
        printf("Your age is less than 18\n");
    }
    return 0;
}