#include <math.h>
#include <stdio.h>

int main(void)
{
   float a11,a12,a13,a21,a22,a23,a31,a32,a33,detA;
   printf("first row a11 a12 a13 \n");
   scanf("%f %f %f",&a11,&a12,&a13);
   printf("second row a21 a22 a23 \n");
   scanf("%f %f %f",&a21,&a22,&a23);
   printf("third row a31 a32 a33 \n");
   scanf("%f %f %f",&a31,&a32,&a33);
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
