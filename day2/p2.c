#include<stdio.h>
int main()
{
   int a=3,b=-2,c=8;
   if(a<=b & ++b == --c || a>c)
    puts("kodaikanal");
   else
    puts("pushpagiri");
   printf("%d %d %d\n",a,b,c);
}