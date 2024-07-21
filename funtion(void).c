#include<stdio.h>
void multip(int , int);
int main(){
		int x, y;
		printf("enter the values");
		scanf("%d%d",&x,&y);
		multip(x,y);
		return 0;
}
void multip(int m, int n)
{
	int p, q, r;
	p=m;
	q=n;
	r=p*q;
printf("multiplication=%d", r);
		




}