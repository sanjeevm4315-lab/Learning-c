#include <stdio.h>
int sum (int,int);
int sum(int a, int b){
    a = 6;// sum functiion cannot change x using a beacause copy of x is provided to sum in a
  return a + b;
}


int main(){
    int x =1 , y =6;
printf("The sum of 1 + 6 is %d\n",sum(x,y));
    return 0;
}