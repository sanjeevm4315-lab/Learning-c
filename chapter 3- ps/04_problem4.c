#include <stdio.h>

int main(){
    int year;
    printf("Enter year:\n");
    scanf("%d", &year);
    if((year %4==0 && year%100!=0) || year%400==0){
        printf("This is a leep year");
     }
    else{
        printf("This is not a leep year");
    }
    return 0;
}