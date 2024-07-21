#include<stdio.h>
int fun(int n);
int main(){
		int k, n;
		printf("enter the value of n = ");
		scanf("%d",&n);
		k=fun(n);
		printf("%d",k);
}
int fun(int n){
		int s;
		if(n==2)
			return 2;
		else if(n%2==0){

		s=n+fun(n-2);
		return(s);
}
		else
		s=n+1+fun(n-1);
		return(s);
		
}