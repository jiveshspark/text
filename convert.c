#include<stdio.h>
void main()
{
int j=0,n,i=0,b[100];

printf("\nEnter a no");
scanf("\nno is = %d",&n);
while(n>0)
{
b[i]=n%2;
n=n/2;
i++;
}
j=i-1;

for(i=j;j>=0;j--)
{
printf("%d",b[j]);
}
}
