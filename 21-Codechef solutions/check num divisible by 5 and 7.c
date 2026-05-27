#include <stdio.h>
int main() {
    int a = 10;
    if ( a % 5 == 0 && a % 7 == 0) {
        printf("%d is divisible by both 5 and 7\n", a);
    }else{
        printf("%d is not divisible by both 5 and 7\n", a);
    }
    return 0;
}