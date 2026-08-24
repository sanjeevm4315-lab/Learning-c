#include <stdio.h>
float c2f(float);
float c2f(float c)
{
    return (c * 9 / 5) + 32;
}
int main(){
    float c = 100;
    printf("celcius to farhenhite for %.2f is %.2f\n",c,c2f(c));
    return 0;
}