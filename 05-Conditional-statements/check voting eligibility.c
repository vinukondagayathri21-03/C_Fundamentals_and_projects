#include <stdio.h>
int main() {
    int a = 16;
    if (a >= 18) {
        printf("%d is eligible to vote.\n", a);
    }else{
        printf("%d is not eligible to vote.\n", a);
    }
    return 0;
}