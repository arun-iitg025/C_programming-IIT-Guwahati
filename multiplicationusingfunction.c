#include<stdio.h>
int multip(int , int );
int main(void){
		int x, y, k;
		printf("enter the value of x and y");6
		scanf("%d%d",&x, &y);
		k=multip(x,y);
		printf("multiplication=%d",k);
		return 0;
}
int multip(int m, int n)
{
		int r;
		r=m*n;
 	return (r);
}