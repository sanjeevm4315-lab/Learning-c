#include <stdio.h>

int main(){
    //Write a program to print multiplication table of a given number n
    int n ;
    scanf("%d", &n);
    for(int i = 1; i < 11; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
    
    return 0;
}
 
