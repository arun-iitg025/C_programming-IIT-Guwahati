#include<stdio.h>
struct book
{
	int bookid;
	char tittle[20];
	float price;
};
struct book input()
{
	struct book b;
	printf("enter book.id tittle price ");
	scanf("%d",&b.bookid);
	fflush(stdin);
	gets(b.tittle);
	scanf("%f",&b.price);
	return(b);
}
void display(struct book b)
{
printf("\n %d %s %f ", b.bookid, b.tittle, b.price);
}
int main(){
	struct book b1;
	b1=input();
	display(b1);

}

