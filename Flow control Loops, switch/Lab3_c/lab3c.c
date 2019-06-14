#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ESC 27 
#define ENTER 13
#define LEFT_ARROW 75
#define RIGHT_ARROW 77
#define F1 59
int main()
{
    int key=0,key2=0;
	while(1){
	printf("Press any key!\n");
    key = getch();	
	if(key>='A' && key<='Z')
		printf("CAPITAL LETTER\n");
	else if(key>='a' && key<='z')
		printf("LOWERCASE\n");
	else if(key>='0' && key<='9')
		printf("NUMBER\n");
	else {
	switch( key)
 {
 case ENTER : printf( "This is ENTER\n" ); break;
 case ESC : printf( "This is ESCAPE\n" ); break;
 case 224 : 
	 key2 = getch();
	 switch(key2){
	  case LEFT_ARROW : printf("THIS IS LEFT ARROW\n"); break;
   	  case RIGHT_ARROW : printf("THIS IS RIGHT ARROW\n"); break;
 		 
		  break;
	   case 0 :
	 key2 =getch();
	  switch(key2){
	  case F1 : printf("THIS IS F1\n"); break;
	  }
 	  break;
   	   default : printf ("ANOTHER UNRECOGNIZED KEY\n"); break;
  }
 
	
	

}
	}
	
	
	
	}
	
	
	return 0;
}