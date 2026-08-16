

#include <stdio.h>

int main()
{
   int A, B;
   A = 20;
   B = 10;
   
   A = A + B; //15
   A = A - (2*B); // A = 5
   B = A + B; // 5
  
   printf(" O valor de A = %d e o valor de B = %d", A, B);


}