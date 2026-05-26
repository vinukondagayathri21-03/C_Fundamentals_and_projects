#include <stdio.h>
#include <string.h>
int main(){
    char text[100] = "Hello, world!";
    int length = strlen(text);
    printf("The length of the string is %d", length);
    return 0;
}