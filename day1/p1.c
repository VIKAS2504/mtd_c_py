//access the number and check the it is even or odd 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if (num%2==0)
    {
    printf("num is even");
    }
    else
    {
    printf("num is odd");
    }
    return 0;
}