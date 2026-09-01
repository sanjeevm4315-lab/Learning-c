#include <stdio.h>
void change_to_ten_times(int);


void change_to_ten_times(int a){
    a = a * 10;
}
int main(){
    int n =46;
    printf("The value of n is %d\n",n);
    change_to_ten_times(n);
    printf("The value of n is %d\n",n);

    return 0;
}