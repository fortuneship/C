#include <stdio.h>

double square(double x)
{
   double result = x * x;
   return result;
}

int main()
{
    // return - returns a value back to the calling funtion
   double x = square(3.14);
   printf("%lf", x);

   return 0;
}