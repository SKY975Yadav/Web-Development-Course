#include<stdio.h>
int main()
{
    int a=10,b=20;
    int c=a;
    a=b;
    b=c;
    printf( "a=%d b=%d",a,b);
}