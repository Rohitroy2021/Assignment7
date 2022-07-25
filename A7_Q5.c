//Write a program to check whether two given numbers are co-prime
//numbers or not
#include<stdio.h>
int main()
{
    int a,b,hcf;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
	 // Finding HCF
	 for( int i=1;i<=a;i++)
	 {
	  if(a%i==0 && b%i==0)
	  {
	   hcf = i;
	  }
	 }

	 // Making Decision
	 if(hcf == 1)
	 {
	  printf("%d and %d are CO-PRIME NUMBERS.", a,b);
	 }
	 else
	 {
	  printf("%d and %d are NOT CO-PRIME NUMBERS.", a,b);
	 }
	 return 0;
}
