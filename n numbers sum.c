#include<stdio.h>
#includ<conio.h>
void main()
{
int i,n,sum;
printf("enter the count of the numbers to find the sum");
scanf("%d",&n);
sum=0;
for(i=1;i<n;i++)
sum=sum+i;
printf("the sum of %d natural numbers is %d",n,sum);
getch();
}
