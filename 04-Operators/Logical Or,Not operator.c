#include <stdio.h>
int main(){
    int a = 10, b = 20, c = 30;
    if(a > 5 || b < 15 || c == 30){
        printf("At least one condition is true\n");
    }
    return 0;
}