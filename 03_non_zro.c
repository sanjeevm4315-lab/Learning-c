#include <stdio.h>

int main(){
    if(1){
        printf("This if is executed\n");

    }
    if (2345){
        printf("This if is also executed\n");
    }
    if (2.125){
        printf("This if is also executed\n");
    }
    if ('c'){
        printf("This if is also executed\n");
    }
    if (0){
        printf("I am zero iam not executed\n");
    }

    return 0;
}