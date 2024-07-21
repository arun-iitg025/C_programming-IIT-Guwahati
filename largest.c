#include<stdio.h>
int main(){
           int a, b;
        printf("enter two number\n");
        scanf("%d%d", &a,&b);
       if (a>b)
{
      printf("%d the largest number\n", a);

}
else if(b>a)
{
      printf("%d the largest number\n",b);

}
else
{
      printf("both are equal number\n");
}


             return 0;
}