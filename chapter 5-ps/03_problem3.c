#include <stdio.h>
 float force(float);
 float force(float mass){
    return mass*9.8;
 }

int main(){
    float mass = 10.0;
    printf("The value of force of mass %.2f is %.2f\n",force(mass));
    return 0;
}