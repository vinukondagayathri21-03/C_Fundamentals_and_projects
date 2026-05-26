#include <stdio.h>
#include <string.h>
int main(){
    char word[20] = "oxcgen";
    word[2] = 'l';
    printf("%s", word);
    return 0;
}