#include <stdio.h>
//fibonacci(n)= 0, 1, 1, 2, 3, 5, 8, 13, 24, 34,......
//fibonacci(n)= fibonacci(n-1)+fibonacci(n-2)
int fibonacci (int);
int fibonacci (int n){
    if(n ==1 || n==2){
        return n-1;
    }
    return fibonacci(n-1)+fibonacci(n-2);

}

int main(){
    int n =4;
    printf("The fibonacci number of %d is %d\n",n, fibonacci(n));

  return 0;
}
