Write a program to check whether a given number is an Armstrong number
or not
#include<stdio.h>

int main()

{

 int a,s,b,c;

 printf("Armstronge number is \n");

 for(a=1;a<=1000;a++)

 {

  s=0;



  while(a>0)

 {

   b=a%10;

  s=s+b*b*b;

  a/=10;

 }

 if(s==a)

 printf("%d\n",a);

 }

}
