# include <stdio.h>
int main (){
    int length, width;
    printf("Enter the Length and Width of the rectangle:");
    scanf("%d %d", &length, &width);
    int area = length * width;
    printf("The area of the rectangle is %d\n", area);
    return 0;

}
