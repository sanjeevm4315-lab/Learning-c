#include <stdio.h>

int main(){
    int marks []={12,34,56,89};
    int* ptr = &marks[0];
    // int *ptr =&marks;
    // int* ptr = marks; // Same as int* ptr = &marks[0];
    for (int i = 0; i < 4; i++)
    {
        printf("The value of marks at index %d is %d\n",i,*ptr);
        ptr++;
    }
    return 0;
}