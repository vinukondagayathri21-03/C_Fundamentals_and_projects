#include <stdio.h>
int main(){
    int side = 6;
    side %= 3;
    printf("%d", side %= 4);
    return 0;
}