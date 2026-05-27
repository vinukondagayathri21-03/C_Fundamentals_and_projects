#include <stdio.h>
int main() {
    int n = 2, i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
}