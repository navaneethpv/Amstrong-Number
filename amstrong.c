#include<stdio.h>
void main()
{
    int num,og,reminder,ams=0;
    printf("Enter a number:");
    scanf("%d",&num);
    og=num;

    while(num!=0)
    {
        reminder=num%10;
        ams=ams+(reminder*reminder*reminder);
        num/=10;
    }
    
    if(og==ams)
    {
        printf("\n The number %d is amstrong!",og);
    }
    else
    {
        printf("\n The number %d is not amstrong!",og);
    }
}