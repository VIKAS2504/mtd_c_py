#include<stdio.h>
#include<math.h>
int main()
{
   int inputnum=0,i=0,ans=0;
   puts("Enter the input number:");
   scanf("%d",&inputnum);
   for(i=0;i<=10;i++)
   {
    ans = inputnum * i;
    printf("%d X %2d = %2d\n",inputnum,i,ans);
   }
   return 0;
}
    