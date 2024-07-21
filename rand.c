#include<stdio.h>
#include<stdlib.h>
int main()
{
          int i,n;
         float a[50], temp;
        printf("give a number ");
        scanf("%d",&n);
        for(i=0;i<=n;i++)
        {

            a[i]= rand();
            printf("%f\t",a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i]<=a[i+1])
            {
                continue;
            }

            else 
            {
                temp=a[i=1];
                a[i+1]=a[i];
                a[i]=temp;
            }
        }
        printf(" \nthe second largest number is %f\t", a[n-2]);

    return 1;
}