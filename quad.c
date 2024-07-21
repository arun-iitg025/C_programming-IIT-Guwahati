// write a program to find root of the quadretic equation//

#include<stdio.h>
#include<math.h>
int main(){
          float A, B, C, D, denom, R1, R2;
         printf("enter the values\n");
         scanf("%d%d%d", &A,&B,&C);
         D = sqrt(B*B-4*A*C);
         denom = 2*A;
        R1 = (- B + D ) / denom;
        R2 = (- B - D ) / denom;
       printf("%R1=%f\nR2=%f\n", R1, R2);

return 0;
}