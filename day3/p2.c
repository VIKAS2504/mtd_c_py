#include<stdio.h>
int main()
{
    double num =  30;
    printf("%u %u %u %u", &num - 1 , &num, &num + 1, &num + 2);
}