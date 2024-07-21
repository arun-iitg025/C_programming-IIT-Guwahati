#include<stdio.h>
int*max(int*);
int main(){
		int a[]={12,23,34,12,12,24,56};
		int *q;
		q=max(a);
		printf("%d",*q);
		return 0;
}
int* max(int *p){
		int i,big, *ibig;
		big=*p;
		for(i=0;*(p+i)!='\0';i++);
		for(i=1;i<7;i++){
			if(*(p+i)>=big){
				big=*(p+i);
				ibig=(p+i);
		}
	}
return ibig;
}
