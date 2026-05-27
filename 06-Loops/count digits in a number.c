#include <stdio.h>
int main() {
    int n = 2547893, count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    printf("Number of digits: %d\n", count);
    return 0;
}