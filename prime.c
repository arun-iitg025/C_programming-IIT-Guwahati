#include<stdio.h>
int main(){
	int n, i;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<=n-1;i++)

      if(n%i==0)

	break;

if(i==n)
	printf("%d is a prime number", n);
else
	printf("%d is not a prime number", n);

}