#include <stdio.h>

int main(){
    int i =72;
    int*j= &i;//j is a integer pointing to i (j is sa integer pointer)
    int k= 12;
    //If want in integer use %u instead of %p
    printf("The adress of i is %p\n",&i);
    printf("The adress of i is %p\n",j);
    printf("The adress of i is %p\n",&k);



    printf("The value at adress j is %d\n",*(&i));
    return 0;
}