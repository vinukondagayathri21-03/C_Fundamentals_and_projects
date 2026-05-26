# include <stdio.h>
int main(){
    int celsius;
    printf("Enter the temperature in celsius:");
    scanf("%d", &celsius);
    int fahrenheit = (celsius * 9/5) + 32;
    printf("The temperature in fahrenheit is %d\n", fahrenheit);
    return 0;
}