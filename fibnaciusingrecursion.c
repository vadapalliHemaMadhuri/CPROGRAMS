#include<stdio.h>
void main()
{
	int i,n,s;
	scanf("%d",&n);
	for(i=0;i<20;i++)
	if(fib(i)=n)
	printf("yes");
	
	return(1);
}
int fib(int n)
{
	if(n==0||n==1)
	return(n);
	else
	return(fib(n-1)+fib(n-2));
}

