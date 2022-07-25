//3. Write a program to check whether a given number is there in the Fibonacci
//series or not.
#include<stdio.h>
int main()
{
    int n,a=-1,b=1,c,num;
    printf("Enter a number");
    scanf("%d",&n);
    printf("Enter num to be checked");
    scanf("%d",&num);
    for(int i=1;i<=n;i++)
    {
       c=a+b;
     // printf("The  term is in infibbonaci series");
       a=b;
       b=c;
   // if(c==num)
   //     printf("Number is in fibbonaci series\n");
    //else
      //  printf("Number is not in fibbonaci series\n ");
    }
    if(num==c)
     printf("The number is a fiobbonaci number");
    else(
         "The number is not a fibbonaci number");
    return 0;
}
