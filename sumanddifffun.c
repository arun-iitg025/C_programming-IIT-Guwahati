#include<stdio.h>
int sum(int ,int);
int diff(int ,int);
int main(){
	int x, y, k, l;
	printf("enter two values");
	scanf("%d%d",&x,&y);
	k=sum(x,y);
	l=diff(x,y);
	printf("sum=%d \n",k);
	printf("difference=%d", l);
	return 0;
}
int sum(int m, int n)
{
	int r;
	r=m+n;
	return(r);
}
int diff(int m, int n)
{
	int s;
	s=m-n;
return(s);


}