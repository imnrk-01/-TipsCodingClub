#include <stdio.h>
void main()
{
    int number,a,sum = 0;    
    printf("Enter a number-");    
    scanf("%d",&number);
    int i = number;

    while(i>0)  
    {  
        a = i%10;  
        sum= sum + a*a*a;  
        i = i/10;  
    }

    if(number==sum)  
    {  
        printf ("%d is an arm. no.", number);  
    }  

    else  
    {  
        printf ("%d is not an arm. no.", number);  
    }  
}