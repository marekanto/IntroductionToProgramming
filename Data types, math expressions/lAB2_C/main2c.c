#include <stdio.h>
#include <stdlib.h>

int main()
{
     int A, B, C, min;
 printf( "Enter the first number: " );
 scanf( "%d" , &A );
 printf( "Enter a second number: " );
 scanf( "%d" , &B );
 printf( "Enter a third number: " );
 scanf( "%d" , &C );
 min = A;
 if( min > B ) min = B;
 if( min > C ) min = C;
 printf( "\n The minimum value = %d" , min );
 fflush(stdin); getchar(); 

}