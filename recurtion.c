//sum of 10 numbers using recurtion//


#include<stdio.h>
int fun(int n);
int main()
{
	int k, n;
	printf("\nEnter the number: ");
	scanf("%d",&n);
	k=fun(n);

	printf("\nSum of the numbers are: %d\n",k);
}
	int fun(int n)
{
	int s;
	if(n==1)
	return 1;
	s=n+fun(n-1);
	return (s);
}