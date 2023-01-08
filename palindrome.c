#include <stdio.h>
void main()
 {
    int a, b, c = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &a);    
    b = a;
    while (a > 0){
        remainder = a % 10;
        c = c * 10 + remainder;
        a = a / 10;
    }
    if (b == c){
        printf("True"); 
    }
    else{
        printf("False"); 
    } 
} 