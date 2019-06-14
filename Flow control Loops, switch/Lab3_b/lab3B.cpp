#include <stdio.h>
#include <conio.h> // library <conio.h> containing function getch()
int main( void )
{
 int letter=0, CapitalLetter=0;
 char key = 'a';
 while( key != 'k' ) {
 printf( "\n press any key: " );
 key = getch( );
 letter++;
 if( key>='A' && key<='Z')
 {
 CapitalLetter++;	
 }
 }
 printf("\nHow many letters there are:%d", letter);
 printf("\nHow many Capial letters there are:%d", CapitalLetter);
  } 

