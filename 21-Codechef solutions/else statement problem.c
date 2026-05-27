#include <stdio.h>
int main() {
    int a = 22;
    int b = 43;
    if ( a > b) {
        printf("%d is greater than %d\n", a, b);
    }else if (a < b) {
        printf("%d is less than %d\n", a, b);
    } else {
        printf("%d is equal to %d\n", a, b);
    }
    return 0;
}