//wap by using recursive function to compute the sum of all odd number//

#include<stdio.h>
int fun(int n);
int main(){
 	int n, k;
	printf("enter the value ");
	scanf("%d",&n);
	k=fun(n);
	printf("%d", k);
	return 0;

}

int fun(int n){
		int s;

	if(n==1)
	 	return 1;
	else if(n%2==0){
		s=n-1+fun(n-3);
	return (s);
}
	else
		s=n+fun(n-2);
	return (s);
	
}
	