#include<stdio.h>
#include<math.h>
int main()
{
   int inputnum = 0;
    puts("Enter number to check if it is perfect square;");
    scanf("%d,&inputnum");
    int root = floor(sqrt(inputnum));
    if(root*root==inputnum)
        printf("%d is perfect square",inputnum);
    else
        printf("%d is not perfect square",inputnum);
    return 0;
}

  