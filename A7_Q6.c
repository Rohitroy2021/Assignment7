//Write a program to print all Prime numbers under 100
int main()
{
int a,b,x,i,count=0;
printf("Enter two numbers to print all prime numbers between them\n");
scanf("%d%d",&a,&b);
printf("These are the prime numbers between %d to %d\n\n",a,b);
for(x=a;x<=b;x++)
{
for(i=2;i<x;i++)
{
if(x%i==0)
break;
}
if (x==i)
{
printf("%d ",x);
count++;
}
}
printf("\n\nTotal %d prime numbers between them\n\n",count);


return 0;
}
