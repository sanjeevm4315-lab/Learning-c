#include <stdio.h>

int main(){
    int a =4;
    printf("%d %d %d\n",  a, a++, ++a);

    //Best Answer: Undefined Behavior (because the C standard doesn't guarantee any order).
    // numeric option: Look for 6 5 5 (most common compiler behavior) or 4 5 5(strict left-to-right logic).
    return 0;
}