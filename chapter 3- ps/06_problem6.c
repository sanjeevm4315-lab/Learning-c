#include <stdio.h>

int main(){
    int a=2,b=5,c=6,d=10;
if(a>b && a>c && a>d){
    printf("The greatest of all is %d\n",a);
}
else if(b>a && b>c && b>d){
    printf("The greatest of all is %d\n",b);
}
else if(c>a && c>b && c>d){
    printf("The greatest of all is %d\n",c);

}
else{
    printf("The greatest of all is %d\n",d);
}
    return 0;
}