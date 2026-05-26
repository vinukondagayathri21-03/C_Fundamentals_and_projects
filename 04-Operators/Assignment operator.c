#include <stdio.h>
int main() {
    int a = 10;
    int b = 20;
    a += b;
    a *= 2;
    a /= 5;
    a -= 4;
    a %= 3;
    printf("The value of a after addition assignment is: %d\n", a);
    return 0;
}