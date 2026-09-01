#include <stdio.h>


void returning_5(int* ptr){ 
    printf("The value of ptr is %p\n", (void*)ptr); 
     printf("The value at ptr is %d\n", *ptr);
}

int main() {
    int i = 10;
    printf("The address of i is %p\n", (void*)&i); 
    returning_5(&i);
    
    return 0;
}
