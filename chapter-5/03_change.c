#include <stdio.h>

int change (int a);

int change (int a) {
a = 77;//misnomer
return 0;
}


int main(){
    int b =22;
    change(b);//value of b remaiins 22
    printf("b is %d\n",b);
    return 0;
}
