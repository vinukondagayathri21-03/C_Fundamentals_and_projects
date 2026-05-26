#include <stdio.h>
int main(){
    char x[20] = "onesha_re";
    char y[20] = "I love you";
    strcat(x, y);
    printf("%s", x, y);
    return 0;
}