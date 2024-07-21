// how to generate a random number using rand function//


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int i;
	srand(time(NULL));

	for(i=0;i<=5;i++)
	{


	printf("%d \n",50+rand()%100+1);
/*	printf("%d \n", rand());
	printf("%d \n", rand());
	printf("%d \n", rand());*/
	}
	return 0;	
}