#include<stdio.h>
int main(){
	int n, i, a=-1, b=1, c;
	printf("enter the number");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
	
	c=a+b;
	printf("%d\t", c);
	a=b;
	b=c;
	}
}