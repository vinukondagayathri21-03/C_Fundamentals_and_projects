#include <stdio.h>
int main() {
    int a = 10;
    if (a > 0) {
        printf("%d is a positive number.\n", a);
    }else if (a < 0) {
        printf("%d is a negative number.\n", a);
    }else{
        printf("%d is zero.\n", a);
    }
    return 0;
}