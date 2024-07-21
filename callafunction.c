// passing an array as an arguement of a function//

#include<stdio.h>
void input(int *);
int main(){
	int i, a[10];
	input(a);
	for(i=0;i<=9;i++)
	printf(" %d", a[i]);
}
void input(int b[]){
	int i;
	printf("enter 10 numbers ");
	for(i=0;i<=9;i++)
		scanf("%d",&b[i]);
	
}