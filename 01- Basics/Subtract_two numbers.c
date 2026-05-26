#include <stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    int subtraction = a - b;
    printf("The subtraction of %d and %d is %d\n", a, b, subtraction);
    return 0;
}
