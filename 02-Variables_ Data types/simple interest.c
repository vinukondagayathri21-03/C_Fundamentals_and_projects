#include <stdio.h>
int main(){
    float principle, rate, time;
    printf("Enter the principle amount:");
    scanf("%f", &principle);
    printf("Enter the rate of interest:");
    scanf("%f", &rate);
    printf("Enter the time in years:");
    scanf("%f", &time);
    float simple interest = (principle * rate * time) / 100;
    printf("The simple interest is %.2f\n", simple interest);
    return 0;
}