#include<stdio.h>
int Nodd (int *arr, int n);
int main(){
	int n;
printf("enter the size of array");
scanf("%d",&n);
int arr[n];
int *arr=&arr[0];
for(int i=0;i<n;i++){
printf("first:");
scanf("%d",*(arr+i));
printf("\n");
}

int d=Nodd(n);
printf("number of odd numbers is:%d",d);






return 0;
}
int Nodd (int *arr, int n){
int d=0;
for(int i=0;i<n;i++){
if(*(arr+i)%2!=0){
d++;
}
return d;
}
