// division of 2 numbers by using function.//


#include<stdio.h>
float division(int m, int n)
{
	int p, q;
	float r;
	p=m;
	q=n;
	r=(float)p/(float)q;
	return(r);
}
int main(){
	int x, y;
	float k;
	printf("enter the values");
	scanf("%d%d",&x,&y);
	k=division(x,y);
	printf("division=%f",k);
return 0;
}
