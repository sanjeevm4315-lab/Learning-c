#include <stdio.h>

int main(){
    char i = 'A';
    char*j= &i;//j is a integer pointing to i (j is a character pointer)
    float k = 5.123;
    float*k1= &k;
    //If want in integer use %u instead of %p
    printf("The adress of i is %p\n",&i);
    printf("The adress of i is %p\n",j);
    printf("The adress of i is %p\n",&k);



    printf("The value at adress j is %d\n",*(&i));
    return 0;
}