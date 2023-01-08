#include<stdio.h>
void main()
{
    int G,S,A,B;
    printf("Gold-\nSlver-\nWeight of golden egg-\nWeight of silver egg-\n");
    scanf("%d %d %d %d",&G,&A,&S,&B);
    if(G*A>S*B)
        printf("Gold");
    else
        printf("Silver");
 
}