#include <math.h>
#include <stdio.h>

int main(void)
{
   float a11,a12,a13,a21,a22,a23,a31,a32,a33,detA;
   printf("enter the value of a11 \n");
   scanf("%f",&a11);
   printf("enter the value of a12 \n");
   scanf("%f",&a12);
   printf("enter the value of a13 \n");
   scanf("%f",&a13);
   printf("enter the value of a21 \n");
   scanf("%f",&a21);
   printf("enter the value of a22 \n");
   scanf("%f",&a22);
   printf("enter the value of a23 \n");
   scanf("%f",&a23);
   printf("enter the value of a31 \n");
   scanf("%f",&a31);
   printf("enter the value of a32 \n");
   scanf("%f",&a32);
   printf("enter the value of a33 \n");
   scanf("%f",&a33);
   detA = a11*(a22*a33 - a32*a23)-a12*(a21*a33 - a31*a23)+a13*(a21*a32 - a31*a22);
   if (detA == 0)
   {
     printf ("Matrix doesn't have an inverse");
   }
   else
   {
      printf(" detA = %.2f \n", detA);
      printf(" InverseA = \n %.2f %.2f %.2f \n", ((a22*a33 - a32*a23))/(detA),(-(a12*a33 - a32*a13))/(detA),((a12*a23 - a22*a13))/(detA));
      printf("  \n %.2f %.2f %.2f \n", (-(a21*a33 - a31*a23))/(detA),((a11*a33 - a31*a13))/(detA),(-(a11*a23 - a21*a13))/(detA));
      printf("  \n %.2f %.2f %.2f \n", ((a21*a32 - a31*a22))/(detA),(-(a11*a32 - a31*a12))/(detA),((a11*a22 - a21*a12))/(detA));

   }

}
