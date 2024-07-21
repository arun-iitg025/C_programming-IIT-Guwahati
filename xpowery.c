#include<stdio.h>
int main(){
	int x, y, p=1, i;
	printf("enter the number and its power ");
	scanf("%d%d", &x, &y);
      for(i=1;i<=y;i++)
	p= p*x;
	printf("result is %d", p);
return 0;




}