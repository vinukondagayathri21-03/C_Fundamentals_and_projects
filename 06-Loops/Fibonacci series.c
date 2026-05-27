#include <stdio.h>
int main() {
    int n = 10;
    int a = 0, b = 1, c = 0;
    printf("%d %d", a, b);
    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }
    return 0;
}