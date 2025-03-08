#include <stdio.h>

void myFunction( int num){
    printf("I am immortal - %d\n",num);
    num++;
    myFunction(num);
}

int main(int argCount, char *argv[])
{
    myFunction(0);
    return 0;
}
