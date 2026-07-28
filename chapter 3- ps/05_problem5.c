//https://ics.uci.edu/~pattis/common/handouts/ascii.html
#include <stdio.h>

int main(){
    char c = 'z';
    printf("The character is %c\n", c);
     printf("The value of character is %d\n", c);
     //97,122
     if(c>=97 && c<=122){
        printf("This character is lowercase\n");
     }
     else{
        printf("This is not lowercase\n");
     }
    return 0;
}