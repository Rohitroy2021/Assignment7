//Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    int n,a=-1,b=1,c;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       c=a+b;
       printf("The Nth term of fibbonaci series is %d\n",c);
       a=b;
       b=c;
      // printf("The Nth term of fibbonaci series is %d",c);
    }
     //printf("The Nth term of fibbonaci series is %d",c);
    return 0;
}
